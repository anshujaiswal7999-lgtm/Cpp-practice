#include<iostream>
using namespace std;


int main()
{
     int n,m,sum=0;
    cout<<"Enter the no of rows in matrix:";
    cin>>n;
    cout<<endl;
    cout<<"Enter the no of column in matrix:";
    cin>>m;
    cout<<endl;
   int a[n][m],b[n][m],c[n][m];
   
    cout<<"for first matrix"<<endl;
    cout<<"Enter the array element:"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    cout<<endl;
    cout<<"the array element are:"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<a[i][j]<<"";
        }
        cout<<endl;
    }
        cout<<endl;
    cout<<"for second matrix"<<endl;
    cout<<"Enter the array element:"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>b[i][j];
        }
    }
    cout<<endl;
    cout<<"the array element are:"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<b[i][j]<<"";
        }
        cout<<endl;
    }
    cout<<endl;
   
     for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
         c[i][j]=0;
            for(int k=0;k<m;k++){
                c[i][j]+=a[i][k]*b[k][j];
            }
   
        }
       
    }
       cout<<endl;
       cout<<"resultant matrix"<<endl;
  for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<c[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;

}