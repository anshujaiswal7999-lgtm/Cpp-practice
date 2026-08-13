#include<iostream>
using namespace std;
int Fact(int n){
    int fact=1;
    for(int i=n;i>=1;i--){
        fact *=i;
    }
    return fact;
}

 

void series(int k)
{
  int sum=0;
    char x='x';
   
   int sign=1;
    for(int i=1;i<=k;i+=2)
    {
        if(sign==1){
           sum=sign*(('x' *i)/Fact(i));  
        }else{
             sum=sign*(('x' *i)/Fact(i));
        }
   
   sign=-sign;
    }
    cout<<"sum ="<< sum;
}
int main()
{

   
    int n;
   cout<<"Enter the nth number of series "<<endl;
   cin>> n;
   cout<<endl;
   
   series(n);
   


return 0;
}