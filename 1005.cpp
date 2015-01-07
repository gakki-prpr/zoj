#include <iostream>

using namespace std;

// fill a; pour a to b; empty b if full; keep doing until hit target

int main()
{
    int a, b, x, sa, sb;
    while(cin >> a >> b >> x){
        sa = 0, sb = 0;
        while(sb != x){
            if(sa == 0){
                sa = a;
                cout << "fill A" << endl;
            }
            if(b - sb >= sa){
                sb += sa;
                sa = 0;
                cout << "pour A B" << endl;
            }
            else{
                sa -= b - sb;
                sb = sa;
                sa = 0;
                cout << "pour A B" << endl << "empty B" << endl << "pour A B" << endl;
            }
        }
        cout << "success" << endl;
    }
}
