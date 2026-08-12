#include<iostream>
using namespace std;

int main(){

    int num, x=0; 
    cout<< "Enter the number:" <<endl;
    cin >> num ;
    cout<<endl;
    for (int i = 1; i <= num ; i++)
    {
        if (num%i==0)
        {
            x++;
       }
    }
    
      if (x==2)
        {
           cout << num <<" is a prime number";
        }
        else{
            cout << num << " is not a prime number";
        } 

    return 0;

}