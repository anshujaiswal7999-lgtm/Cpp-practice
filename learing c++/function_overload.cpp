#include<iostream>
using namespace std;
int sum(int a,int b){
    return a+b;
};
int sum(int a,int b,int c){
    return a+b+c;
};
double volume(double r,int h){
    return 3.14*r*r*h;
};
int volume(int a){
    return a*a*a;
};
int volume(int l,int b,int h){
    return l*b*h;
};
int main()
{
cout<<"the sum of two argument is "<<sum(5,5)<<endl;
cout<<"the sum of three argument is "<<sum(5,5,5)<<endl;
cout<<"the volume of cylinder is "<<volume(5,5)<<endl;
cout<<"the volume of cube is  "<<volume(5)<<endl;
cout<<"the volume of rectangular box is  "<<volume(5,5,5)<<endl;
return 0;
}