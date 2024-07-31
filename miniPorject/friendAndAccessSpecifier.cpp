#include <bits/stdc++.h>
using namespace std;

class animal{
private:
  string animalName;
  int animalAge;
  string animalSound;
public:
  void setData(string n , int a , string s);
  friend int increaseAge(animal& n);
  void getData();
};

void animal :: setData(string n , int a , string s)
{
  animalName = n;
  animalAge = a;
  animalSound = s;
}
int increaseAge(animal& a)
{
  a.animalAge+=5;
}
void animal :: getData()
{
  cout<<animalName<<" "<<animalAge<<" "<<animalSound<<endl;
}

class human{
private:
  string phone;
  string email;
  void adminGetData()
  {
    cout<<"Phone Number: "<<phone<<endl;
    cout<<"Email is: "<<email<<endl;
  }
public:
  string name;
  string id;
  void input();
  void getUserData();
};

void human :: input()
{
  cout<<"Enter Your Name: ";
  cin>>name;
  cout<<"Enter Your Id: ";
  cin>>id;
  cout<<"Enter Your Phone Number: ";
  cin>>phone;
  cout<<"Enter Your Email: ";
  cin>>email;
}

void human :: getUserData()
{
  cout<<"Your Name "<<name<<endl;
  cout<<"Your Id "<<id<<endl;
  cout<<"If You are a Admin then Type 1: ";
  int n;
  cin>>n;
  if(n==1)
  {
    cout<<"Enter Your Password: ";
    string adminPass;
    cin>>adminPass;
    if(adminPass == "admin123")
    {
      adminGetData();
    }
  }
}
int main()
{
  animal cow;
  cow.setData("Cow",10,"hamba");
  increaseAge(cow);
  cow.getData();
  human supto;
  supto.input();
  cout<<"If you are a user then type 1: ";
  int n;
  cin>>n;
  if(n==1)
  {
    cout<<"Enter Your Password: ";
    string userPass;
    cin>>userPass;
    if(userPass == "user123")
    {
      supto.getUserData();
    }
  }
}
