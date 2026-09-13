#include<iostream>
#include<fstream>

using namespace std;

int main(){
    string st = "Harry bhai";
    // Opening files using constructor and writing it
    ofstream out("sample61.txt"); // Write operation
    out<<st;

    return 0;
}
