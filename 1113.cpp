#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double e, tmp;
    cout << "n e" << endl;
    cout << "- -----------" << endl;
    e = 1;
    tmp = 1;
    for(int i = 0; i < 10; i++){
        if(i == 3)
            cout << fixed << setprecision(9);
        if(i == 0){
            cout << i << " " << e << endl;
        }
        else{
            tmp *= i;
            e += 1 / tmp;
            cout << i << " " << e << endl;
        }
    }
}
