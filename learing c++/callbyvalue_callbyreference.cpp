#include<iostream>
using namespace std;
 void swapValue( int a,int b)
{
  int c;
  c=a;
  a=b;
  b=c;
  cout<<"incide call by value:"<<endl;
  cout<<"a= "<<a<<endl;
  cout<<"b= "<<b<<endl;

};
void swapReference(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;

    cout << "Inside call by reference:" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
};
void swappointer(int*a,int*b){
    int temp =*a;
    *a =* b;
   *b = temp;

    cout << "Inside call by pointer:" << endl;
    cout << "a = " << *a << endl;
    cout << "b = " << *b << endl;
}
int main()
{
int a,b;
    cout<<"Enter the value of a:";
    cin>>a;
    cout<<endl;
    cout<<"Enter the value of b:";
    cin>>b;
    cout<<endl;
      cout << "The original value of a & b :" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    swapValue(a,b);
     cout << "After call by value in main Function:" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    swapReference(a,b);
      cout << "After call by Reference in main Function:" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
     swappointer(&a,&b);
      cout << "After call by pointer in main Function:" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    return 0;
}