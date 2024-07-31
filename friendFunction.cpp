#include <bits/stdc++.h>
using namespace std;
class complexNumber
{
private:
  int a , b;
public:
  void setData(int i , int j)
  {
    a = i;
    b = j;
  }
  friend complexNumber sumComplex(complexNumber c1 , complexNumber c2);
  void getData()
  {
    cout<<a<<" "<<b<<endl;
  }
};

complexNumber sumComplex(complexNumber c1 , complexNumber c2)
{
  complexNumber c3;
  c3.setData((c1.a+c2.a) , (c1.b+c2.b));
  return c3;
}

int main()
{
  complexNumber ob1 , ob2;
  ob1.setData(10,5);
  ob1.getData();
  ob2.setData(7,6);
  ob2.getData();
  complexNumber c3;
  c3 = sumComplex(ob1,ob2);
  c3.getData();
}
