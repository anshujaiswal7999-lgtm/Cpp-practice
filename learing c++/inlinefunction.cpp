#include<iostream>
using namespace std;
inline int product(int a,int b){
return a*b;
}
int sellingprice(int amt,int cp=5){
  return (amt-cp);
}
int main()
{
int a,b,amt;
cout<<"Enter the values of a : "<<endl;
cin>>a;
cout<<"Enter the values of b: "<<endl;
cin>>b;
cout<<endl;
cout<<"the product is "<<product(a,b)<<endl;
cout<<"the product is "<<product(a,b)<<endl;
cout<<"the product is "<<product(a,b)<<endl;
cout<<"the product is "<<product(a,b)<<endl;
cout<<"Enter the values of amt: "<<endl;
cin>>amt;
cout<<"the selling price is "<<sellingprice(amt);
return 0;
}