#include<iostream>
using namespace std;
class test{
   int count;
   static int totalCount;
   public:
   test(){
    count=0;
   }
   void call(){
    count++;
    totalCount++;
   }
   void display(){
    cout<<"calls by this object: "<<count<<endl;
    cout<<"calls by all object: "<<totalCount<<endl;;
   }
};
int test::totalCount=0;
int main()
{
  test obj1,obj2;
  obj1.call();
  obj1.call();
  obj1.call();
  obj2.call();
  obj2.call();
  cout<<"Objet1"<<endl;
  obj1.display();
   cout<<"Objet2"<<endl;
  obj2.display();

return 0;
}