#include <bits/stdc++.h>
using namespace std;
class students{
  string name;
  string id;
  string roll;
public:
  void setData(string a , string b , string c)
  {
    name = a;
    id = b;
    roll = c;
  }
  void display()
  {
    cout<<name<<" "<<id<<" "<<roll<<endl;
  }
};
int main()
{
  students six[4];
  for(int i=1;i<=3;i++)
  {
    string n,d,r;
    cin>>n>>d>>r;
    six[i].setData(n,d,r);
  }
  for(int i=1;i<=3;i++)
  {
    six[i].display();
  }
}
