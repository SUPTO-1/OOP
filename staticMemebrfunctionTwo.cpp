#include <bits/stdc++.h>
using namespace std;
class students{
public:
  string name , id;
  void input();
  void display();
  static int cnt;
  static void totalStudent();
};
void students :: input()
{
  cout<<"Enter Your Name: ";
  cin>>name;
  cout<<"Enter Your Id: ";
  cin>>id;
  cnt++;
}
void students :: display()
{
  cout<<"Your Name: "<<name<<endl;
  cout<<"Your Id: "<<id<<endl;
}
void students :: totalStudent()
{
  cout<<"Total Student: "<<cnt<<endl;
}
int students :: cnt;
int main()
{
  students nine[20];
  for(int i=1;i<=3;i++)
  {
    nine[i].input();
    nine[i].display();
    students :: totalStudent();
  }
}
