#include<iostream>
using namespace std;
int main() {
    cout<<"--------------------------------------------------"<<endl;
    cout<<"Program to check whether a number is \n divisible bu both 2 and 3 or divisible by any one of them"<<endl;
    cout<<"--------------------------------------------------"<<endl;
    int num;
    cout<<"Enter a number : "<<endl;
    cin>>num;

     if(num%2==0 && num%3==0)
     {
         cout<<"Divisible by both 2 and 3"<<endl;
     }
     else if(num%2==0 || num%3==0)
     {
         cout<<"Divisible 2 or 3 (ie) any one of them"<<endl;
     }
     else
     {
         cout<<"Not divisible by both 2 and 3"<<endl;
     }
     
    return 0;
}