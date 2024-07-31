#include<bits/stdc++.h>
using namespace std;
class female
{
private:
  int age;
public:
  void setData(int age1)
  {
    age = age1;
  }
  void getData()
  {
    cout<<age<<endl;
  }
};
int main()
{
  female tanha;
  tanha.setData(25);
  tanha.getData();
}
