#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main()
{
    int D, V;
    double R, d;
    while(cin >> D >> V){
        if(D == 0)
            break;
        R = D / 2.0;
        d = 2 * pow(pow(R, 3.0) - 0.75 * V / M_PI, 1 / 3.0);
        cout << fixed << setprecision(3) << d << endl;
    }
}
