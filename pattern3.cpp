#include<iostream>
using namespace std;

int main() {
    cout<<"--------------------------------------------"<<endl;
    cout<<"|HOLLOW RECTANGLE PATTERN BY MUSHARAF AAHEL|"<<endl;
    cout<<"--------------------------------------------"<<endl;
    int row, col;
    cout<<"Enter the rows and columns : "<<endl;
    cin>>row>>col;

    for(int i=1; i<=row; i++)
    {
        for(int j=1; j<=col; j++)
        {
            if( i==1 || i==row || j==1 || j==col)
            {
                cout<<"*";
            }
        
            else
            {
                cout<<" ";
            } 
        }
        cout<<endl;
    }
}