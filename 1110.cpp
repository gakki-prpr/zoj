#include <iostream>

using namespace std;

int main()
{
    int s, p, y, j, S, P, Y;
    double a;
    while(cin >> s >> p >> y >> j){
        a = (12 + j + s + y) / 3.0;
        S = (12 + j + s + y) / 3.0;
        P = (12 + j + p - s) / 3.0;
        Y = (12 + j - p - y) / 3.0;
        if(a > S)
            S += 1;
        if(S + P + Y - 12 < j)
            P += 1;
        cout << S << " " << P << " " << Y << endl;
    }
    return 0;
}
