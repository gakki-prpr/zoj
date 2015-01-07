#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main()
{
    int n;
    float ans;
    const float sqrt2 = sqrt(2);
    cin >> n;
    for(int i = 0; i < n; i++){
        int a, b;
        cin >> a;
        cin >> b;
        ans = (a * b) & 1 ? a * b - 1 + sqrt2 : a * b;
        cout << "Scenario #" << i + 1 << ":" << endl;
        cout << fixed << setprecision(2) << ans << endl << endl;
    }
}
