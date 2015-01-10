#include <iostream>
#include <cmath>
#include <queue>

using namespace std;

void clear(queue<int> &q )
{
   queue<int> empty;
   swap(q, empty);
}

int bfs(int *d, int chess[][8], queue<int> buck){
    if(chess[d[0]][d[1]] >= 0 || buck.empty())
        return chess[d[0]][d[1]];   // found min step or went through whole chess map
    int x = buck.front(); buck.pop();
    int y = buck.front(); buck.pop();
    int cur_val = chess[x][y];

    for(int i = 0; i < 8; i++)
        for(int j = 0; j < 8; j++){
            if(chess[i][j] >= 0)      // if it is already marked, skip
                continue;

            if((abs(x - i) == 1 && abs(y - j) == 2) || (abs(x - i) == 2 && abs(y - j) == 1)){
                chess[i][j] = cur_val + 1;
                buck.push(i), buck.push(j);
            }
        }
    return bfs(d, chess, buck);
}

int main()
{
    char *str = new char[4];
    int chess[8][8], *s = new int[2], *d = new int[2];
    queue<int> buck;

    while(cin >> str[0]){
        cin >> str[1] >> str[2] >> str[3];

        for(int i = 0; i < 8; i++){
            for(int j = 0; j < 8; j++)
                chess[i][j] = -1;     // use -1 as not reached
        }
        clear(buck);

        s[0] = str[0] - 'a', s[1] = str[1] - '1';
        d[0] = str[2] - 'a', d[1] = str[3] - '1';
        chess[s[0]][s[1]] = 0;      // set source
        chess[d[0]][d[1]] = -2;      // set dest
        buck.push(s[0]); buck.push(s[1]);

        cout << "To get from " << str[0] << str[1] << " to "
             << str[2] << str[3] << " takes "
             << bfs(d, chess, buck) << " knight moves." << endl;
    }
}
