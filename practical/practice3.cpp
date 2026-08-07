#include<iostream>
using namespace std;

int main(){
   int sum=0;
   
    char x;
     cout << "Choose an option:"<<endl;
      cout << "Enter a:for loop" <<endl;
      cout << "Enter b: while loop" <<endl;
      cout << "Enter c: do-while loop" <<endl;
     cout<<"Enter your choice:"<<endl;
    cin >> x;
    cout<<endl;
    switch (x)
    {
    case 'a':
        {
       for(int i=1;i<=100;i++)
       {
        sum+=i;
        
       }
        cout<<"sum = "<<sum<<endl;
        }
        break;
    case 'b':
    {
        int i=1;
     while(i<=100)
    {
        sum+=i;
       
        i++;
    }
    cout<<"sum = "<<sum<<endl;
    break;
    }
    case 'c':
    {
        int i=1;
     do{
         sum+=i;
        
        i++;
     }while(i<=100);
      cout<<"sum = "<<sum<<endl;
      break;
    }
    default:
    {
        cout<<"Entered wrong choice"<<endl;
         break;
    }  
    }


    return 0;

}