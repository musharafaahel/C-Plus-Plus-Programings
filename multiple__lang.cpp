#include<iostream>
using namespace std;

int main() {
    cout<<"-------------------------------------------"<<endl;
    cout<<"| MULTIPLE LANGUAGES HELLO BY USING SWITCH |"<<endl;
    cout<<"-------------------------------------------"<<endl;

    int option;
    cout<<"Enter a number from 1-4"<<endl;
    cin>>option;

    switch (option)
    {
    case 1:
        cout<<"Hello\n";
        break;
    case 2:
        cout<<"Assalamu Alaikum\n";
        break;
    case 3:
        cout<<"Vanakam\n";
        break;
    case 4:
        cout<<"Namesta\n";
        break;        
    default:
        cout<<"I need to learn more\n";
        break;
    }
    
    return 0;
}