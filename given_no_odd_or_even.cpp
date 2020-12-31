#include<iostream>
using namespace std;

int main() {
    cout<<"---------------------------------------"<<endl;
    cout<<"  FINDING GIVEN NUMBER IS ODD OR EVEN  "<<endl;
    cout<<"---------------------------------------"<<endl;

    int a;
    cout<<"Enter a number :"<<endl;
    cin>>a;

    if(a%2==0) {
        cout<<"The given number "<<a<<" is even "<<endl;
    } else {
        cout<<"The given number "<<a<<" is odd "<<endl;
    }
    return 0;
}