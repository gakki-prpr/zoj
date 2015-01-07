#include <iostream>

using namespace std;

int main()
{
    double* lib;
    double sum = 0.0;
    int n = 0;

    while(sum < 5.20){
        sum += 1.00 / (n + 2);
        n++;
    }
    lib = new double [n - 1];
    sum = 0.0;

    for(int i = 0; i < n - 1; i++){
        sum += 1.0 / (i + 2);
        lib[i] = sum;
    }

    double input;
    cin >> input;
    while(input > 0.01){
        int m = n - 2;
        for(int i = 0; i < n - 1; i++)
            if(input < lib[i]){
                m = i + 1;
                break;
            }
        cout << m << " card(s)" << endl;
        cin >> input;
    }
}

