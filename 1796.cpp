#include <iostream>

using namespace std;

int main()
{
    int a, b, c, d, e, f;
    while(cin >> a >> b >> c >> d >> e >> f){
        if(a==0 && b==0 && c==0 && d==0 && e==0 && f==0)
            break;
        cout << "Anna's won-loss record is " << (a + b) * 2 - (a + c + e) << "-"
             << (a + b) * 2 - (b + d + f) << "." << endl;
    }
    return 0;
}
