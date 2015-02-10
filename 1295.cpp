#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n;
    string s;
    cin >> n;
    cin.clear();
    cin.ignore(256, '\n');
    while(n-- > 0){
        getline(cin, s);
        for(int i = s.length() - 1; i >= 0; i--){
            cout << s.at(i);
        }
        cout << endl;
    }
    return 0;
}
