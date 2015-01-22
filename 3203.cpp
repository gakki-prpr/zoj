#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int n;
    double H, h, D, max, tmp, len_f, len_w;
    cin >> n;
    cout << fixed << setprecision(3);
    while(n-- > 0){
        cin >> H >> h >> D;
        max = h;
        for(double i = 0.001; i < D; i += 0.001){
            tmp = H * i / (H - h);
            if(tmp <= D){
                len_f = tmp - i;
                len_w = 0;
            }
            else{
                len_f = D - i;
                len_w = (tmp - D) * H / tmp;
            }
            if(max < len_f + len_w)
                max = len_f + len_w;
        }
        cout << max << endl;
    }
    return 0;
}
