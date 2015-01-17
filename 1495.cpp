#include <iostream>

using namespace std;

int main()
{
    int n, rings[100], ind, res;
    while(cin >> n){
        if(n == 0)
            break;
        ind = n, res = 0;

        for(int i = 0; i < n; i++)
            cin >> rings[i];

        for(int i = 0; i < n; i++){
            if(rings[i] < ind)
                ind = rings[i] - 1;
            else if(ind == 0){
                res = n - i;
                break;
            }
            else
                ind -= 1;
        }
        cout << res << endl;
    }
    return 0;
}
