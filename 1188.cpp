#include <iostream>

using namespace std;

int main()
{
    int N, m, n, ind;
    long res[100], min;
    char s[100][50], t[100][50], tmp;
    cin >> N;

    while(N-- > 0){
        cin >> m >> n;
        for(int i = 0; i < n; i++)
            for(int j = 0; j < m; j++){
                cin >> s[i][j];
                t[i][j] = s[i][j];
            }

        for(int i = 0; i < n; i++){
            res[i] = 0;
            for(int j = 0; j < m; j++)
                for(int k = 0; k < m - j - 1; k++){
                    if(t[i][k] > t[i][k+1]){
                        res[i]++;
                        tmp = t[i][k];
                        t[i][k] = t[i][k+1];
                        t[i][k+1] = tmp;
                    }
                }
        }

        for(int i = 0; i < n; i++){
            min = -1;
            for(int j = 0; j < n; j++)
                if(min == -1 || (res[j] >= 0 && res[j] < min)){
                    ind = j;
                    min = res[j];
                }

            res[ind] = -1;

            for(int j = 0; j < m; j++)
                cout << s[ind][j];
            cout << endl;
        }
        if(N > 0)
            cout << endl;
    }
    return 0;
}
