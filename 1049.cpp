#include <iostream>
#include<math.h>

using namespace std;

int main()
{
    int n, res;
    cin >> n;
    for(int i = 0; i < n; i++){
        float a, b;
        cin >> a;
        cin >> b;
        res = ceil(M_PI * (pow(a, 2) + pow(b, 2)) / 100);
        cout << "Property " << i + 1 << ": This property will begin eroding in year " << res << "." << endl;
    }
    cout << "END OF OUTPUT." << endl;
}
