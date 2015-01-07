#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;

int tran(char x){
    switch(x){
    case '_':
        return 0;
    case '.':
        return 27;
    default:
        return x - 'a' + 1;
    }

}

char rtran(int x){
    switch(x){
    case 0:
        return '_';
    case 27:
        return '.';
    default:
        return (char) 96 + x;
    }
}

int main()
{
    int k, n;
    int *p, *c;
    string s;

    while(cin >> k){
        if(k == 0)
            break;
        cin >> s;
        n = s.length();
        p = new int[n];
        c = new int[n];
        for(int i = 0; i < n; i++){
            c[i] = tran(s.at(i));
            p[k*i % n] = (i + c[i]) % 28;
        }

        for(int i = 0; i < n; i++)
            cout << rtran(p[i]);
        cout << endl;
    }
}
