#include<iostream>
using namespace std;

int main() {

    int savings;
    cout<<"Enter the amount you have : ";
    cin>>savings;

    if (savings > 5000) 
    {
        if(savings >6000) {
            cout<<"Hire a car and go with expensive girl friend";
        } else
        {
            cout<<"go by walking with girl friend" ;
        }
        
    } else if (savings >=3000) 
    {
        cout<<"Go with friends";
    } else
    {
        cout<<"Go with family";
    }
    return 0;   
}