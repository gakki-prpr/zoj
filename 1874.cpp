#include <iostream>
#include <string>

using namespace std;

int main()
{
    unsigned int a[10], b[10], lena, lenb, count, ind, carry;
    string s, t;
    while(cin >> s >> t){
        if(s == "0" && t == "0")
            break;
        lena = s.length(), lenb = t.length(), count = 0, ind = 0, carry = 0;
        for(int i = 0; i < lena; i++)
            a[i] = s.at(lena-1-i) - '0';
        for(int i = 0; i < lenb; i++)
            b[i] = t.at(lenb-1-i) - '0';
        while(ind < lena || ind < lenb){
            if((ind < lena ? a[ind] : 0) + (ind < lenb ? b[ind] : 0) + carry >= 10){
                count++;
                carry = 1;
            }
            else
                carry = 0;
            ind++;
        }
        if(count > 1)
            cout << count << " carry operations." << endl;
        else if(count == 1)
            cout << "1 carry operation." << endl;
        else
            cout << "No carry operation." << endl;
    }
    return 0;
}
