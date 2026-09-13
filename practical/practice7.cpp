#include<iostream>
using namespace std;
class complex{
   int a,b;
   public:
   complex(){
    a=0;
    b=0;
   }
   complex(int x,int y){
    a=x;
    b=y;
   }
    void display(){
    cout<<a<<"+"<<"i"<<b<<endl; 
   }
   complex sum(complex z){
    complex temp;
    temp.a=a+z.a;
    temp.b=b+z.b;
    return temp;
   }
   complex minus(complex z){
    complex temp;
    temp.a=a-z.a;
    temp.b=b-z.b;
    return temp;
   }
     complex multiply(complex z){
    complex temp;
    temp.a=(a*z.a)-(b*z.b);
    temp.b=(a*z.b)+(b*z.a);
    return temp;
    }
     complex divide(complex z){
    complex temp;
    temp.a=((a*z.a)+(b*z.b))/((z.a*z.a)+(z.b*z.b));
    temp.b=((b*z.a)-(a*z.b))/((z.a*z.a)+(z.b*z.b));
    return temp;
    }
};
int main()
{
    cout<<"the first complex number is : "<<endl;
    complex obj1(5,6);
    obj1.display();
    cout<<"the second complex number is : "<<endl;
    complex obj2(5,4);
    obj2.display();
    cout<<"the addition of two  complex number is : "<<endl;
    complex obj3=obj1.sum(obj2);
    obj3.display();
      cout<<"the  subtraction of two complex number is : "<<endl;
     complex obj4=obj1.minus(obj2);
    obj4.display();
      cout<<"the Multiplication of two complex number is : "<<endl;
    complex obj5=obj1.multiply(obj2);
    obj5.display();
      cout<<"the division of two complex number is : "<<endl;
    complex obj6=obj1.divide(obj2);
    obj6.display();
    return 0;
}