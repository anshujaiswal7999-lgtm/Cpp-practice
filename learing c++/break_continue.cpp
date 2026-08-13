#include<iostream>
using namespace std;
int main()
{
    cout<<"using For loop statement"<<endl;
    for (int i = 1; i < 6; i++)
    {
        cout<<i<<endl;
      
    }
    cout<<"using break statement"<<endl;
    for (int i = 1; i < 6; i++)
    {
        cout<<i<<endl;
        if(i==3)
        break;
    }
    cout<<"using continue statement"<<endl;
    for (int i = 1; i < 6; i++)
    {
        if(i==3)
        continue;
        cout<<i<<endl;
        
    }
    
return 0;
}
