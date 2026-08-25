#include<iostream>
using namespace std;
 int fact(int n){
    if(n<=1){
        return 1;
    }
    return n*fact(n-1);
};
 int fibnacci(int n){
    if(n==1){
        return 1;
    }
     if(n==0){
        return 0;
    }
    return fibnacci(n-2)+fibnacci(n-1);
};
int main()
{
    int n;
    cout<<"Enter a number"<<endl;
    cin>>n;
    cout<<"the factorial of " <<n<< "is"<<fact(n)<<endl;
    cout<<"the fibnacci series at  "<<n<< " position is"<<fibnacci(n)<<endl;
return 0;
}