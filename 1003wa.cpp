#include <iostream>

using namespace std;

int main()
{
    int a, b, s, l, res;

    while(cin >> a >> b){

        if(a < b)
            s = a, l = b;
        else
            s = b, l = a;

        a = s, b = l;

        for(int i = 100; i > 1; i--){
            if(s % i == 0){
                s /= i;
            }
            else if(l % i == 0){
                l /= i;
            }
            if(l == 1 && s == 1){
                res = b;
                break;
            }
        }

        if(s != 1)
            res = b;
        else if(l != 1)
            res = a;

        cout << res << endl;
    }
}
