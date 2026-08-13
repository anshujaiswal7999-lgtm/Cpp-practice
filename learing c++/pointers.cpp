#include<iostream>
using namespace std;
int main()
{
int a=5;
int*b=&a;
int**c=&b;
cout<<"address of  variable"<<endl;
cout<<"the adress of a :"<<&a<<endl;
cout<<"the adress of a :"<<b<<endl;
cout<<endl;
cout<<"Value of pointer variable"<<endl;
cout<<"the value of a :"<<*b<<endl;
cout<<endl;
cout<<"pointer to pointer variable"<<endl;
cout<<"the adress of b :"<<&b<<endl;
cout<<"the adress of b:"<<c<<endl;
cout<<"the value of c: "<<**c<<endl;
cout<<endl;
return 0;
}