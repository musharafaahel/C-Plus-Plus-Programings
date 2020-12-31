#include<iostream>
using namespace std;

int main() {
    cout<<"---------------------------------------"<<endl;
    cout<<"|  FIND MAX & MIN AMONG TWO NUMBERS   |"<<endl;
    cout<<"---------------------------------------"<<endl;
    
    int a,b;
    cout<<"Enter Two Numbers randomly : "<<endl;
    cin>>a>>b;

    if(a>b) {
        cout<<"The Maximum Number is "<<a<<endl;
        cout<<"The Minimum Number is "<<b<<endl;
    } else
    {
        cout<<"The Maximum Numbe is "<<b<<endl;
        cout<<"The Minimum Number is "<<a<<endl;
    }
    return 0;
}