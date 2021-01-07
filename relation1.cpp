#include<iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter a number : "<<endl;
    cin>>n;

    if(n > 10)
    {
        cout<<"Given number is greater than 10"<<endl;
    }
    else if(n < 10) 
    {
        cout<<"Given number is less than 10"<<endl;
    }
    else
    {
        cout<<"Given number is equal to 10"<<endl;
    }
    
    return 0;
}