#include <iostream>
#include <string>

using namespace std;

int main()
{
    long wc, ws;
    int n, m, N, tmp;
    cin >> N;
    while(N-- > 0){
        wc = 0; ws = 0;
        cin >> n >> m;
        for(int i = 0; i < n; i++){
            cin >> tmp;
            wc += tmp;
        }

        for(int i = 0; i < m; i++){
            cin >> tmp;
            ws += tmp;
        }
        if(ws == wc)
            cout << "Draw" << endl;
        else if(ws > wc)
            cout << "Serena" << endl;
        else
            cout << "Calem" << endl;
    }
    return 0;
}
