#include<bits/stdc++.h>
using namespace std;
class binary{
public:
  string s;
  void readString();
  void checkBinaryString();
  void countZeroAndOne();
  void oneComplement();
  void afterComplement();
};
void binary :: readString()
{
  cin>>s;
}
void binary :: checkBinaryString()
{
  for(int i=0;i<s.length();i++)
  {
    if(s[i]!='0' && s[i]!='1')
    {
      cout<<"This is not a binary string"<<endl;
      exit(0);
    }
  }
  cout<<"This is Binary string"<<endl;
}

void binary :: countZeroAndOne()
{
  int one = 0;
  int zero = 0;
  for(int i=0;i<s.length();i++)
  {
    if(s[i]=='1')
    {
      one++;
    }
    else
    {
      zero++;
    }
  }
  cout<<"Before 1's Complement number of one is: "<<one<<endl;
  cout<<"Before 1's Complement number of zero is: "<<zero<<endl;
  cout<<"Before 1's Complement string is: "<<s<<endl;
}
void binary :: oneComplement()
{
  for(int i=0;i<s.length();i++)
  {
    for(int i=0;i<s.length();i++)
    {
      if(s[i]=='1')
      {
        s[i] = '0';
      }
      else
      s[i] = '1';
    }
  }
}

void binary:: afterComplement()
{
  int one = 0;
  int zero  = 0;
  for(int i=0;i<s.length();i++)
  {
    if(s[i]=='1')
    {
      one++;
    }
    else zero++;
  }
  cout<<"After 1's Complement number of one is: "<<one<<endl;
  cout<<"After 1's Complement number of zero is: "<<zero<<endl;
  cout<<"After 1's Complement string is: "<<s<<endl;
}
int main()
{
  binary first;
  first.readString();
  first.checkBinaryString();
  first.countZeroAndOne();
  first.oneComplement();
  first.afterComplement();
}
