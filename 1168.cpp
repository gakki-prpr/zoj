#include <iostream>

using namespace std;

int dfs(int a, int b, int c, int tbl[][21][21]){
    int tmp;
    if(a <= 0 || b <= 0 || c <= 0)
        return 1;

    if(a > 20 || b > 20 || c > 20)
        return dfs(20, 20, 20, tbl);

    if(tbl[a][b][c] > 0)
        return tbl[a][b][c];

    if(a < b && b < c){
        tmp = dfs(a, b, c-1, tbl) + dfs(a, b-1, c-1, tbl) - dfs(a, b-1, c, tbl);
        tbl[a][b][c] = tmp;
        return tmp;
    }

    else{
        tmp = dfs(a-1, b, c, tbl) + dfs(a-1, b-1, c, tbl) + dfs(a-1, b, c-1, tbl) - dfs(a-1, b-1, c-1, tbl);
        tbl[a][b][c] = tmp;
        return tmp;
    }
}

int main()
{
    int a, b, c;
    int tbl[21][21][21];
    for(int i = 0; i < 21; i++)
        for(int j = 0; j < 21; j++)
            for(int k = 0; k < 21; k++)
                tbl[i][j][k] = 0;
    tbl[0][0][0] = 1;

    while(cin >> a >> b >> c){
        if(a == -1 && b == -1 && c == -1)
            break;
        cout << "w(" << a << ", " << b << ", " << c << ") = " << dfs(a, b, c, tbl) << endl;
    }
}
