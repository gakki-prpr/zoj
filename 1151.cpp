#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main()
{
    const int max_length = 1000;
    int a, b, x, ind;
    char* s = new char[max_length];
    string str;
    stack <char> rev;
    cin >> b;

    for(int k = 0; k < b; k++){
        cin >> a;
        cin.ignore(1, '\n');
        for(int i = 0; i < a; i++){
            getline(cin, str);
            for(x = 0, ind = 0; x < str.length(); x++){
                if(str.at(x) == ' '){
                    s[x] = str.at(x);
                    while(!rev.empty()){
                        s[ind++] = rev.top();
                        rev.pop();
                    }
                    ind++;    //skip ' ' or '\n'
                }
                else{
                    rev.push(str.at(x));
                }
            }
            while(!rev.empty()){
                s[ind++] = rev.top();
                rev.pop();
            }
            for(int j = 0; j < x; j++)
                cout << s[j];
            cout << endl;
        }
        if(k < b - 1)
            cout << endl;
    }
}
