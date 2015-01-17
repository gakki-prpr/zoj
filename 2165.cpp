#include <iostream>

using namespace std;

void dfs(int x, int y, int m, int n, int **tbl){
    if(x < 0 || y < 0 || x >= m || y >= n)      // out of range of 2d array tbl
        return;
    if(tbl[x][y] == 0)      // red tile, cant pass
        return;
    else if(tbl[x][y] == 9)      // passed tile, ignore, we have already dealt with it somewhere
        return;
    else{       // first time reached, do stuff
        tbl[x][y] = 9;
        dfs(x-1, y, m, n, tbl);
        dfs(x, y-1, m, n, tbl);
        dfs(x+1, y, m, n, tbl);
        dfs(x, y+1, m, n, tbl);
        return;
    }
}

int main()
{
    int m, n;
    while(cin >> n >> m){
        if(n == 0 && m == 0)
            break;

        int **tbl, xs, ys, count = 0;
        tbl = new int *[m];
        char tmp;

        for(int i = 0; i < m; i++)
            tbl[i] = new int[n];
        for(int i = 0; i < m; i++)
            for(int j = 0; j < n; j++){
                cin >> tmp;
                if(tmp == '.')
                    tbl[i][j] = 1;
                else if(tmp == '#')
                    tbl[i][j] = 0;
                else{
                    xs = i; ys = j;
                    tbl[i][j] = 1;
                }
            }
        dfs(xs, ys, m, n, tbl);

        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                if(tbl[i][j] == 9)
                    count++;
                //cout << tbl[i][j] << " ";
            }
            //cout << endl;
        }
        cout << count << endl;
    }
    return 0;
}
