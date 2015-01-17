#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str;

    while(cin >> str, str!="0")
    {
        int n = 0;
        for(string::size_type i=0; i!=str.size(); i++)
            n+=str[i]-'0';
        n %= 9;
        if(n == 0)
            n = 9;
        cout << n << endl;
    }
    return 0;
}

/*
 *  弃九法的扩展应用
 *  k是n进制下的一个数，s是k各位数字之和，则存在k%(n-1)=s%(n-1);
 *  利用同余的原理证明。
 *  http://www.cnblogs.com/acsmile/archive/2011/04/30/2033445.html
 */

