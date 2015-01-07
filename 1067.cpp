#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int** arr = new int*[16];
    for(int i = 0; i < 16; i++)
        arr[i] = new int[3];

    for(int i = 0; i < 16; i++){
        cin >> arr[i][0] >> arr[i][1] >> arr[i][2];
    }
    int x, y, z;
    cin >> x >> y >> z;

    while(x != -1 && y != -1 && z != -1){
        int n = 0;
        double dist = sqrt(255*255*3);
        for(int i = 0; i < 16; i++){
            double tmp = sqrt(pow((x - arr[i][0]), 2) + pow((y - arr[i][1]), 2) + pow((z - arr[i][2]), 2));
            if(tmp < dist){
                n = i;
                dist = tmp;
            }
            if(dist - 0.0 < 0.01)
                break;

        }
        cout << "(" << x << "," << y << "," << z << ") maps to (" << arr[n][0] << "," << arr[n][1] << "," << arr[n][2] << ")" << endl;
        cin >> x >> y >> z;
    }
}
