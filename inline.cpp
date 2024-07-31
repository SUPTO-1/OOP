#include <bits/stdc++.h>
using namespace std;
inline sum(int a , int b)
{
  return ((a+5) * (b + 10));
}
int multi(int a , int b=8)
{
  return a+b;
}
int division(int a , int b)
{
  static int c = 0;
  c+=1;
  return a+b+c;
}
int main()
{
  cout<<sum(10,20)<<endl;
  cout<<multi(5)<<endl;
  cout<<division(5,10)<<endl;
  cout<<division(5,10)<<endl;
  cout<<division(5,10)<<endl;
}
