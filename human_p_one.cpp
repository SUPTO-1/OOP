#include<bits/stdc++.h>
using namespace std;
class human
{
private:
  int national_id;
public:
  string name;
  int age;
  float height;
  string address;
  void setNationalId(int id1)
  {
    national_id = id1;
  }
  void setData(string name1 , int age1 , int height1 , string address1);
  void display();
};
void human :: setData(string name1 , int age1 , int height1 , string address1)
{
  name = name1;
  age = age1;
  height = height1;
  address = address1;
}
void human :: display()
{
  cout<<name<<" "<<age<<" "<<height<<" "<<address<<endl;
}
int main()
{
  human supto;
  supto.setData("Jahidul",24,5.5,"Chittagong");
  supto.setNationalId(47847);
  supto.display();
}
