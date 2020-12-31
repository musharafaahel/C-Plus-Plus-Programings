#include<iostream>
using namespace std;

int main() {
    cout<<"---------------------------------"<<endl;
    cout<<"|      MULTPLICATION TABLE      |"<<endl;
    cout<<"|      By MUSHARAF AAHEL.A      |"<<endl;
    cout<<"---------------------------------"<<endl;

    int n;
    cout<<"Enter the Number to create table :"<<endl;
    cin>>n;

    for (int i = 1; i <= 10; ++i)
    {
        cout<<n<<"*"<<i<<"="<<n*i<<endl;
    }
    
    return 0;
}