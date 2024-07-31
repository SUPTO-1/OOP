#include <bits/stdc++.h>
using namespace std;
class couple{
public:
  string name;
  int age;
  string adress;
  string phone;
  void input();
  couple sumSingle(couple male , couple female);
  void get();
};
void couple :: input()
{
  cin>>name>>age>>adress>>phone;
}
void couple :: get()
{
  cout<<name<<" "<<age<<" "<<adress<<" "<<phone<<endl;
}
couple couple :: sumSingle(couple male , couple female)
{
  name = male.name + female.name;
  age = male.age + female.age;
  adress = male.adress + female.adress;
  phone = male.phone + female.phone;
  couple temp;
  temp.name = name;
  temp.age = age;
  temp.adress = adress;
  temp.phone = phone;
  return temp;
}
int main()
{
  couple male;
  male.input();
  male.get();
  couple female;
  female.input();
  female.get();
  couple duijon;
  duijon.sumSingle(male,female);
  duijon.get();
}
