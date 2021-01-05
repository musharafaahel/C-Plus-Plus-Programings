#include<iostream>
using namespace std;

int main() {
    char c;
    cout<<"Enter a Character : "<<endl;
    cin>>c;

    switch (c)
    {
    case 'a':
        cout<<"It is vowel"<<endl;
        break;
    case 'e':
        cout<<"It is vowel"<<endl;
        break;
    case 'i':
        cout<<"It is vowel"<<endl;
        break;
    case 'o':
        cout<<"It is vowel"<<endl;
        break;
    case 'u':
        cout<<"It is vowel"<<endl;
        break; 
    case 'A':
        cout<<"It is vowel"<<endl;
        break;
    case 'E':
        cout<<"It is vowel"<<endl;
        break;
    case 'I':
        cout<<"It is vowel"<<endl;
        break;
    case 'O':
        cout<<"It is vowel"<<endl;
        break;
    case 'U':
        cout<<"It is vowel"<<endl;
        break;
    default:
        cout<<"It is consonant"<<endl;
        break;
    }
    return 0;
}