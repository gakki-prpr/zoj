#include <iostream>

using namespace std;

int main()
{
    int n, arr[50], len, count;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> len;
        for(int j = 0; j < len; j++)
            cin >> arr[j];
        count = 0;

        for(int j = 1; j < len - 1; j++){
            if(arr[j] > arr[j-1] && arr[j] > arr[j+1])
                count++;
        }
        cout << count << endl;
    }
    return 0;
}
