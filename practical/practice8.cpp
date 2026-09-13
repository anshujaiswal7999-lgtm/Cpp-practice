#include <iostream>
using namespace std;
class class2;
class class1
{
    int b;

public:
    class1()
    {
        b = 0;
    }
    class1(int y)
    {
        b = y;
    }
    void display(){
     cout<<"value in class1 :"<<b<<endl;
    }
    friend void exchange(class1 &obj1,class2 &obj2);
};
class class2
{
    int a;

public:
    class2()
    {
        a = 0;
    }
    class2(int x)
    {
        a = x;
    }
    void display(){
     cout<<"value in class2 :"<<a<<endl;;
    }
    friend void exchange(class1 &obj1,class2 &obj2);
};
  void exchange(class1 &obj1,class2 &obj2){
    int temp=obj1.b;
    obj1.b=obj2.a;
    obj2.a=temp;
 }
int main()
{
    class1 obj1(10);
    class2 obj2(20);
    cout<<"Before Exchange"<<endl;
    obj1.display();
    obj2.display();
    exchange(obj1,obj2);
    cout<<"After Exchange"<<endl;
    obj1.display();
    obj2.display();
    return 0;
}