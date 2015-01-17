#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    double VS, VR, R, C, w;
    int n;
    cin >> VS >> R >> C >> n;

    while(n-- > 0){
        cin >> w;
        VR = w*C*VS*sqrt(1 / (pow(w*C*R, 2)+1));        // copy this equation from online, too hard for me QAQ
        cout << fixed << setprecision(3) << VR << endl;
    }
    return 0;
}
