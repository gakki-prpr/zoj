#include <iostream>

using namespace std;

int main()
{
    int c, n, m, count, num;
    cin >> c;
    while(c-- > 0){
        num = 1;
        while(cin >> n >> m){
            if(n == 0 && m == 0)
                break;
            count = 0;
            for(int i = 2; i < n; i++){
                for(int j = 1; j < i; j++){
                    if((i*i + j*j + m) % (i*j) == 0)
                        count++;
                }
            }
            cout << "Case " << num++ <<": " << count << endl;
        }
        if(c > 0)
            cout << endl;
    }
    return 0;
}
