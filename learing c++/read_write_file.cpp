#include<iostream>
#include<fstream>

using namespace std;

int main(){
    ofstream out("sample61.txt");
    string name;
    cout<<"enter your name\n";
    cin>>name;
    out<<"my name is "+name;
    out.close();
    
    // Opening files using constructor and reading it
    ifstream in("sample61.txt"); // Read operation
    string content;
    
     getline(in, content);  
    //  in>>content;
    cout<<"the content of this is "<<content;
    in.close();
    return 0;
}
