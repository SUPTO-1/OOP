#include<bits/stdc++.h>
using namespace std;
class human{
private:
  int age;
  void setAge(int age1)
  {
    age = age1;
  }
public:
  int money;
  void setMoney(int money1,int age1);
};


void human :: setMoney(int money1,int age1)
{
  money = money1;
  setAge(age1);
}

int main()
{
  human h1;
  h1.setMoney(20,30);
}
