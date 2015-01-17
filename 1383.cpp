#include <iostream>

using namespace std;

int main()
{
    int d, n, bi[25], tmp, len;
    cin >> d;
    while(d-- > 0){
        cin >> n;
        tmp = n;
        for(len = 0; tmp > 0; len++){
            bi[len] = tmp % 2;
            tmp = tmp / 2;
        }
        for(int i = 0; i < len; i++){
            if(bi[i] == 1){
                cout << i;
                if(i < len - 1)
                    cout << " ";
            }
        }
        if(d > 0)
            cout << endl;
    }
}
