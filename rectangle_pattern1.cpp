#include<iostream>
using namespace std;

int main() {
    cout<<"------------------------------------------"<<endl;
    cout<<"|   RECTANGLE PATTERN BY MUSHARAF AAHEL  |"<<endl;
    cout<<"------------------------------------------"<<endl;
    int rows, columns;
    cout<<"Enter the row and column size :"<<endl;
    cin>>rows>>columns;

    for(int i=1;i<=rows;++i)
    {
        for(int j=1;j<=columns;++j)
        {
            cout<<"*";
        }
        cout<<endl;
    }

}