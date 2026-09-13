#include<iostream>
using namespace std;
class Date{
   int day, month, year;
   public:
   Date(){
    day=11;
    month=11;
    year=2006;
   }
   Date(int d,int m,int y){
     day=d;
     month=m;
     year=y;
   }
    void display(){
      cout<<day<<"|"<<month<<"|"<<year<<endl;
    }
};
int main()
{
    cout<<"Date with default value: ";
 Date obj1;
 obj1.display();
  cout<<"Date with initial value: ";
 Date obj2(13,9,2026);
obj2.display();

return 0;
}