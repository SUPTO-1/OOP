#include<bits/stdc++.h>
using namespace std;
class human{
private:
  int age , score;
  void setPrivate(int age1 , int score1)
  {
    age = age1;
    score = score1;
  }
public:
  int year , money;
  void setMoney(int year1 , int money1 , int age1 , int score1 )
  {
    year = year1;
    money = money1;
    setPrivate(age1 , score1 );
  }
};
int main()
{
  human h1;
  h1.setMoney(10,20,30,40);
  return 0;
}
