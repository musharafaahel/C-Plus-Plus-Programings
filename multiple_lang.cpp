#include<iostream>
using namespace std;

int main() {
    cout<<"-------------------------------------------"<<endl;
    cout<<"|MULTIPLE LANGUAGES HELLO BY USING ELSE IF|"<<endl;
    cout<<"-------------------------------------------"<<endl;

    int option;
    cout<<"Enter a number from 1-4"<<endl;
    cin>>option;


    if(option==1)
    {
        cout<<"Hello\n";
    }
    else if(option==2)
    {
        cout<<"Vanakam\n";
    }
    else if(option==3)
    {
        cout<<"Namesta\n";
    }
    else if(option==4)
    {
        cout<<"Assalamu Alaikum\n";
    }
    else
    {
        cout<<"I need to learn more\n";
    }
    return 0;
}