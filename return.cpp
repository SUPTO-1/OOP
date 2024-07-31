#include <bits/stdc++.h>
using namespace std;
class name{
public:
  string s;
  int age;
  void set()
  {
    cin>>s>>age;
  }
  string get()
  {
    return s;
  }
  int getAge()
  {
    return age;
  }
};
int main()
{
  name a;
  a.set();
  cout<<a.get()<<" "<<a.getAge()<<endl;
}
