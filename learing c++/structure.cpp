#include<iostream>
using namespace std;
 struct employee
{
    int ID;
    char favchar;
    float salary;
} ;

int main()
{
   struct employee obj;
   obj.ID=1;
   obj.favchar='c';
   obj.salary=12000000;
   cout<<"the value is"<<obj.ID<<endl;
   cout<<"the value is"<<obj.favchar<<endl;
   cout<<"the value is"<<obj.salary<<endl;
  


return 0;
}