#include<iostream>
using namespace std;
int main(){
    int age;
     cout<<"Tell me your age"<<endl;
     cin>>age;
     cout<<endl;
     if((age<18)&&(age>0)){
        cout<<"you are kid";
     }else if((age==18)){
        cout<<"you are a young";
     }else if((age>18)&&(age<=35)){
        cout<<"you are Mature";
     }else if(age<1){
        cout<<"you are not born";
     }else{
     cout<<"you are old";
     }
    return 0;
}