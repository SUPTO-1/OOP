#include<bits/stdc++.h>
using namespace std;
class book{
private:
  int pages;
  string name;
  string author;
  string published_year;
public:
  book();
  void book_display()
  {
    cout<<"Number of pages is: "<<pages<<endl;
    cout<<"Name of Book is: "<<name<<endl;
    cout<<"Name of author is: "<<author<<endl;
    cout<<"published Year is: "<<published_year<<endl;
  }
};
book :: book()
{
  cin>>pages;
  cin>>name;
  cin>>author;
  cin>>published_year;
}
int main()
{
  book a;
  a.book_display();
}
