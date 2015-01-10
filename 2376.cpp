#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    long c, len, n, minl, maxl;
    cin >> c;

    for(long i = 0; i < c; i++){
        cin >> len >> n;
        minl = 0;
        maxl = 0;
        long tmp, tt;
        for(long j = 0; j < n; j++){
            cin >> tmp;
            tt = len - tmp;
            minl = max(minl, min(tmp, tt));
            maxl = max(maxl, max(tmp, tt));
        }
        cout << minl << ' ' << maxl << endl;
    }
}
