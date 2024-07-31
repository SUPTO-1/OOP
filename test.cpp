#include<bits/stdc++.h>
using namespace std;

class employee
{
private:
  int a , b ,c;
public:
  int d , e;
  void setData(int a1,int b1,int c1); // declaration
  void getData()
  {
    cout<<"The Value of a is: "<<a<<endl;
    cout<<"The Value of b is: "<<b<<endl;
    cout<<"The Value of c is: "<<c<<endl;
    cout<<"The Value of d is: "<<d<<endl;
    cout<<"The Value of e is: "<<e<<endl;
  }
};

void employee :: setData(int a1 , int b1 , int c1)
{
  a = a1;
  b = b1;
  c = c1;
}
int main()
{
  employee supto;
  supto.d = 10;
  supto.e= 20;
  supto.setData(1,2,3);
  supto.getData();
}
