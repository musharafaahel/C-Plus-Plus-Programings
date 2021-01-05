#include<iostream>
using namespace std;

int main() {
    cout<<"-------------------------------------------"<<endl;
    cout<<"|  SIMPLE CALCULATOR BY MUSHARAF AAHEL. A |"<<endl;
    cout<<"-------------------------------------------"<<endl;

    int num1, num2;
    char op;
    
    cout<<"Enter two numbers : "<<endl;
    cin>>num1>>num2;

    cout<<"Enter the operator symbol : "<<endl;
    cin>>op;

    switch (op)
    {
    case '+':
        cout<<num1+num2<<endl;
        break;
    case '-':
        cout<<num1-num2<<endl;
        break;
    case '/':
        cout<<num1/num2<<endl;
        break;
    case '*':
        cout<<num1*num2<<endl;
        break;
    default:
        cout<<"Operator not programmed......";
        break;
    }
    return 0;
}