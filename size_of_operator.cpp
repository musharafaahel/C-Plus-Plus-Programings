#include<iostream>
using namespace std;

int main() {
    int a; // Variable Declaration
    a = 10; // Variable initializaion

    cout<<"size of int :"<<sizeof(a)<<endl;

    float b;
    cout<<"size of float : "<<sizeof(b)<<endl;

    char c;
    cout<<"size of char : "<<sizeof(c)<<endl;

    bool d;
    cout<<"size of bool : "<<sizeof(d)<<endl;

    cout<<"-------------------------------"<<endl;

    short int e;
    cout<<"size of short int : "<<sizeof(e)<<endl;

    long int f;
    cout<<"size of long int : "<<sizeof(f)<<endl;

    signed int g;
    cout<<"size of signed int : "<<sizeof(g)<<endl;

    unsigned int h;
    cout<<"size of unsigned int : "<<sizeof(h)<<endl;

    return 0;
}