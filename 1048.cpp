#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float balance = 0;
    for(int i = 0; i < 12; i++){
        float tmp = 0;
        cin >> tmp;
        balance += tmp;
    }
    balance /= 12;
    cout << '$' << fixed << setprecision(2) << balance << endl;
}

