#include<iostream>
using namespace std;

int main() {
    cout<<"--------------------------------------------"<<endl;
    cout<<"|   To Find Given Number is Prime or Not   |"<<endl;
    cout<<"--------------------------------------------"<<endl;

    int n;
    cout<<"Enter a number : "<<endl;
    cin>>n;
    int i;
    for (i=2; i<n; i++) 
    {
        if(n%i==0) 
        {
            cout<<"Not a prime number"<<endl;
            break;
        }
    }   
    if (i==n) {
    cout<<"Given number is prime"<<endl;
    }
    return 0;
}