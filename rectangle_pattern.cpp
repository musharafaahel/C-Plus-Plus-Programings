#include<iostream>
using namespace std;

int main() {
    cout<<"------------------------------------------"<<endl;
    cout<<"|   RECTANGLE PATTERN BY MUSHARAF AAHEL  |"<<endl;
    cout<<"------------------------------------------"<<endl;

    int rows;
    cout<<"Enter the no of row to create rectangle patten : "<<endl;
    cin>>rows;

    for(int i=1;i<=rows;++i)
    {
        cout<<"*";
        cout<<"*";
        cout<<"*";
        cout<<"*"<<endl;
    }
    return 0;
}