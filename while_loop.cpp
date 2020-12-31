#include<iostream>
using namespace std;

int main() {
    int a;
    cout<<"Enter a number : "<<endl;
    cin>>a;

    while (a>0)
    {
        cout<<"The new value is "<<a<<endl;
        cout<<"Enter a number : "<<endl;
        cin>>a;
    }
    return 0;
}