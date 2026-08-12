#include<iostream>
using namespace std;
int main ()
{
    int a,b;
    cout<<"Enter first number"<<endl;
    cin>>a;
    cout<<endl;
    cout<<"Enter Second number"<<endl;
    cin>>b;
    cout<<endl;
    cout<<"These are Arithmetic operation"<<endl;
    cout<<"the value of a+b is "<<a+b<<endl;
    cout<<"the value of a-b is "<<a-b<<endl;
    cout<<"the value of a*b is "<<a*b<<endl;
    cout<<"the value of a/b is "<<a/b<<endl;
    cout<<"the value of a%b is "<<a%b<<endl;
    cout<<"the value of a++ is "<<a++<<endl;
    cout<<"the value of a-- is "<<a--<<endl;
    cout<<"the value of ++a is "<<++a <<endl;
    cout<<"the value of --a is "<<--a<<endl;
    cout<<endl;
    cout<<"these are assignment operation"<<endl;
    double c=5.123456789;
    char d='d';
    cout<<"the value of c is "<<c<<endl;
    cout<<"the value of d is "<<d<<endl;
    cout<<endl;
    cout<<"these are comparison operation"<<endl;
    cout<<"the value of a==b is "<<(a==b)<<endl;
    cout<<"the value of a!=b is "<<(a!=b)<<endl;
    cout<<"the value of a>b is "<<(a>b)<<endl;
    cout<<"the value of a<b is "<<(a<b)<<endl;
    cout<<"the value of a>=b is "<<(a>=b)<<endl;
    cout<<"the value of a<=b is "<<(a<=b)<<endl;
    cout<<endl;
    cout<<"these are logical  operation"<<endl;
    cout<<"the value of (a==b)&&(a<b) is "<<((a==b)&&(a<b))<<endl;
    cout<<"the value of (a==b)||(a<b) is "<<((a==b)||(a<b))<<endl;
    cout<<"the value of !(a>b) is "<<!(a>b)<<endl;

    return 0;
}