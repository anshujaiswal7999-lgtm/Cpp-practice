#include<iostream>
using namespace std;

int main(){

    int num1, num2, num3, num4;
    char x;
     cout << "Choose an option:"<<endl;
      cout << "Enter a:for largest between two number" <<endl;
      cout << "Enter b:for largest between three number" <<endl;
      cout << "Enter c:for largest between four number" <<endl;
     cout<<"Enter your choice:"<<endl;
    cin >> x;
    cout<<endl;
    switch (x)
    {
    case 'a':
        {
    cout << "Enter number 1" <<endl;
    cin >> num1;
    cout<<endl;
    cout << "Enter number 2" <<endl;
    cin >> num2;
     cout<<endl;
            if (num1>num2)
            {
                cout<<num1<< " is greater number" <<endl;
            }
            else{
                 cout<<num2<< " is greater number" <<endl;
            }
        }
        break;
    case 'b':
    {
    cout << "Enter number 1" <<endl;
    cin >> num1;
    cout<<endl;
      cout << "Enter number 2" <<endl;
    cin >> num2;
    cout<<endl;
      cout << "Enter number 3" <<endl;
    cin >> num3;
    cout<<endl;
        if((num1>num2)&&(num1>num3))
        {
            cout<<num1<< " is greater number" <<endl;
        }
        else if((num2>num1)&&(num2>num3))
        {
          cout<<num2<< " is greater number" <<endl;  
        }
        else{
            cout<<num3<< " is greater number" <<endl;
        }
         break;
    }
    case 'c':
    {
     cout << "Enter number 1" <<endl;
    cin >> num1;
    cout<<endl;
      cout << "Enter number 2" <<endl;
    cin >> num2;
    cout<<endl;
      cout << "Enter number 3" <<endl;
    cin >> num3;
    cout<<endl;
      cout << "Enter number 4" <<endl;
    cin >> num4;
    cout<<endl;
        if((num1>num2)&&(num1>num3)&&(num1>num4))
        {
            cout<<num1<< " is greater number" <<endl;
        }
        else if((num2>num1)&&(num2>num3)&&(num2>num4))
        {
          cout<<num2<< " is greater number" <<endl;  
        }
        else if ((num3>num1)&&(num3>num2)&&(num3>num4)) 
        {
            cout<<num3<< " is greater number" <<endl;
        }
         else{
            cout<<num4<< " is greater number" <<endl;
        }
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