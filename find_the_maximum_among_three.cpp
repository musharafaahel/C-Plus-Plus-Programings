#include<iostream>
using namespace std;

int main() {
    cout<<"---------------------------------------"<<endl;
    cout<<"FINDING THE MAXIMUM NUMBER AMOUNG THREE"<<endl;
    cout<<"---------------------------------------"<<endl;


    int a, b, c;
    cout<<"Enter three numbers randomly : "<<endl;
    cin>>a>>b>>c;

    if (a>b) {
        if (a>c) {
            cout<<"The maximum number is "<<a<<endl;
        } else {
            cout<<"The maximum number is "<<c<<endl;
        }
    } else
    {
        if(b>c) {
            cout<<"The maximum number is "<<b<<endl;
        } else {
            cout<<"The maximum number is "<<c<<endl;
        }
    }
    return 0;
}