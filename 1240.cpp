#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n;
    string s;
    char* d, tmp;
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> s;
        d = new char[s.length()];
        for(int j = 0; j < s.length(); j++){
            tmp = (s.at(j) + 1);
            if(tmp > 'Z')
                d[j] = 'A';
            else
                d[j] = tmp;
        }
        cout << "String #" << i + 1 << endl;
        for(int j = 0; j < s.length(); j++)
            cout << d[j];
        cout << endl << endl;
    }
}
