#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

int main() {
    string username;
    int password;
    cout<<"-------------------------------------------------\n";
    cout<<"|                    WELCOME                    |\n";
    cout<<"|               LOGIN AUTHENTICATOR             |\n";
    cout<<"|----------------BY MUSHARAF AAHEL--------------|\n";
    cout<<"-------------------------------------------------\n";
    
    cout<<"Enter the username : "<<endl;
    cin>>username;
    
    
    if (username == "musharafaahel" )
    {
        cout<<"ID FOUND"<<endl;
        cout<<"Enter the password : "<<endl;
        cin>>password;
        if ( password == 123456789) 
        {
            cout<<" LOGIN SUCCESSFUL"<<endl;
        }
        else
        {
            cout<<"login unsuccessful due to password is incorrect"<<endl;
        }
    }
    else
    {
        cout<<"ID NOT FOUND"<<endl;
    }

    cout<<"---------------------------------------------"<<endl;
    cout<<"THANKS FOR RUNNING THE AUTHENTICATION PROGRAM"<<endl;
    cout<<"---------------------------------------------"<<endl;

    
    
    return 0;
}