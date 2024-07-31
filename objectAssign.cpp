#include <bits/stdc++.h>
using namespace std;
class name{
public:
  string s;
  string phone;
  int age;
  void set(string s1 , string phone1 , int age1);
};

void name :: set(string s1 , string phone1 , int age1)
{
  s = s1;
  phone = phone1;
  age = age1;
}
int main()
{
  name a;
  a.set("Jahidul","016626",24);
  name b;
  b = a;
  cout<<b.s<<" "<<b.phone<<" "<<b.age<<endl;
}
