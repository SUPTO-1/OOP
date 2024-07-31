#include<bits/stdc++.h>
using namespace std;
class cmp_Class{
public:
  int class_number;
  string name;
  string roll;
  string phone;
  void setData(int class_number1 , string name1 , string roll1 , string phone1);
};
void setData(int class_number1 , string name1 , string roll1 , string phone1)
{
  class_number = class_number1;
  name = name;
  roll = roll1;
  phone = phone1;
}
void getData()
{
  cout<<class_number<<" "<<name<<" "<<roll<<" "<<phone<<endl;
}
int main()
{
  cmp_Class *one[40];
  one = new cmp_Class;
  for(int i=1;i<=5;i++)
  {
    int class_number;
    string name;
    string roll;
    string phone;
    cin>>class_number>>name>>roll>>phone;
    one[i]->setData(class_number , name , roll , phone);
  }
}
