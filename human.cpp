#include<bits/stdc++.h>
using namespace std;
class human
{
public:
  string name;
  void display()
  {
    cout<<"Hello "<<name<<endl;
  }
};
int main()
{
  human supto;
  supto.name = "Supto Bhai";
  supto.display();
  human tanha;
  tanha.name = "tanha bolod";
  tanha.display();
}
