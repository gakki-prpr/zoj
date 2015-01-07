#include <iostream>
#include <algorithm>
using namespace std;
bool F1,F2;   //f1,记录两人分数能分解成合法形式
     //f2,记录挑战者的分数是否符合要求
void RerDfs(int b,int s,int n)
{
 if(F1==true)
  return;
 if(b==1&&s==1)  //两个数都能刚好分解
 {
  F1 = true;
  F2 = true;
  return;
 }
 if(s==1)   //数s能刚好分解
 {
  F2 = true;
 }
 if(n<2)   //两个数都不能合法分解
  return;
 if(b%n==0)   //为b因子,进入把它当b因子情况
  RerDfs(b/n,s,n-1);
 if(s%n==0)   //同上
  RerDfs(b,s/n,n-1);
 RerDfs(b,s,n-1); //不把该因子当b或s的因子情况
}
int main()
{
 int big,small;
 while(cin >> big >> small)
 {
  if(small>big) swap(big,small);
  F1 = F2 = false;
  RerDfs(big,small,100);
  if(F1==true||F2==false)
   cout << big << endl;
  else if(F2==true&&F1==false)
   cout << small << endl;
 }
 return 0;
}
