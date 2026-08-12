#include<iostream>
using namespace std;
int main(){
     int age ;
     cout<<"Tell me your age"<<endl;
     cin>>age;
     cout<<endl;
     int x=1;
     switch (x)
     {
     case 1:{
      if((age<18)&&(age>0))
      {
        cout<<"you are kid";
    }if((age==18)){
        cout<<"you are a young";
     }if((age>18)&&(age<=35)){
        cout<<"you are Mature";
     }if(age<1){
        cout<<"you are not born";
     }
}
        break;
        
     }
    return 0;
}