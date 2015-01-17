#include <iostream>

using namespace std;

int main()
{
    int N, day, K, s[20][20], d[20][20], dna[16];
    int (*p)[20] = s, (*q)[20] = d, (*r)[20];
    cin >> N;
    for(int i = 0; i < N; i++){
        cin >> day;

        for(int j = 0; j < 16; j++)
            cin >> dna[j];

        for(int x = 0; x < 20; x++)
            for(int y = 0; y < 20; y++)
                cin >> p[x][y];

        for(int j = 0; j < day; j++){
            for(int x = 0; x < 20; x++)
                for(int y = 0; y < 20; y++){
                    K = p[x][y];
                    if(x - 1 >= 0)
                        K += p[x-1][y];
                    if(x + 1 <= 19)
                        K += p[x+1][y];
                    if(y - 1 >= 0)
                        K += p[x][y-1];
                    if(y + 1 <= 19)
                        K += p[x][y+1];
                    q[x][y] = p[x][y] + dna[K];
                    if(q[x][y] < 0)
                        q[x][y] = 0;
                    if(q[x][y] > 3)
                        q[x][y] = 3;
                }
            r = p;
            p = q;
            q = r;
        }

        for(int x = 0; x < 20; x++){
            for(int y = 0; y < 20; y++){
                if(p[x][y] == 0)
                    cout << '.';
                else if(p[x][y] == 1)
                    cout << '!';
                else if(p[x][y] == 2)
                    cout << 'X';
                else
                    cout << '#';
            }
            cout << endl;
        }
    if(i < N - 1)
        cout << endl;
    }
}
