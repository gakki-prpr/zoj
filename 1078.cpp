#include <iostream>

using namespace std;

int main()
{
    long n;

    while(cin >> n){
        if(n == 0)
            break;
        cout << "Number " << n << " is ";
        long counter = 0;

        for(int i = 2; i < 17; i++){
            long tmp = n;
            int* digit = new int[32];
            int len = 0;
            bool p = true;

            while(tmp > 0){
                digit[len++] = tmp % i;
                tmp /= i;
            }

            for(int j = 0; j < len / 2; j++){
                if(digit[j] != digit[len - 1 -j]){
                    p = false;
                    break;
                }
            }

            if(p){
                counter++;
                if(counter == 1)
                    cout << "palindrom in basis";
                cout << " " << i;
                //cout << " " << convert(n, i) << endl;
            }
        }
        if(counter == 0)
            cout << "not a palindrom";
        cout << endl;
    }
}
