#include <bits/stdc++.h>
using namespace std;
class students{
public:
  string name , id;
  static int cnt;
  void setData()
  {
    cin>>name>>id;
    cnt++;
  }
  void getData()
  {
    cout<<name<<" "<<id<<endl;
    cout<<"Total Number of student is: "<<cnt<<endl;
  }
};
int students :: cnt;
int main()
{
  students supto,sad;
  supto.setData();
  supto.getData();
  sad.setData();
  sad.getData();
}
