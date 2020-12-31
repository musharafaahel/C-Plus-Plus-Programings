#include<iostream>
using namespace std;

int main() {

    int savings;
    cout<<"Enter the amount you have : ";
    cin>>savings;

    if (savings > 5000) 
    {
        cout<<"Go with expensive girl friend";
    } else if (savings >=3000) 
    {
        cout<<"Go with friends";
    } else
    {
        cout<<"Go with family";
    }
    return 0;   
}