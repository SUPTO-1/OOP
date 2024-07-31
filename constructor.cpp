#include<bits/stdc++.h>
using namespace std;
class animal{
  int a,b;
public:
  animal(void);
  void display()
  {
    cout<<a<<" "<<b<<endl;
  }
};

animal :: animal(void)
{
cin>>a;
cin>>b;
}
int main()
{
  animal first,second;
  first.display();
  second.display();
}
