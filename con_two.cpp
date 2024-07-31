#include<bits/stdc++.h>
using namespace std;

class number_er_khela{
private:
  int prime , multi , divisor;
public:
  number_er_khela(int x , int y , int z);
  void primeNumber();
  void multi_ber_koro();
};
number_er_khela :: number_er_khela(int x , int y , int z)
{
  prime = 20;
  multi = 30;
  divisor = 150;
}
void number_er_khela :: primeNumber()
{
  bool flag = 0;
  for(int i=2;i<prime;i++)
  {
    if(prime%i==0)
    {
      flag = 1;
      break;
    }
  }
  if(flag == 1)
  {
    cout<<"Not Prime"<<endl;
  }
  else cout<<"Prime"<<endl;
}
void number_er_khela :: multi_ber_koro()
{
  for(int i=1;i<=10;i++)
  {
    cout<<"Multiplication: "<<multi*i<<endl;
  }
}
int main()
{
  number_er_khela a(20 , 30 , 150);
  a.primeNumber();
  a.multi_ber_koro();
}
