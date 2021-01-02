#include<iostream>
using namespace std;

int main() {
    int a,b;
    cout<<"Enter a range (example: 10 20 press enter ) :"<<endl;
    cin>>a>>b;
    
    
    for( int num=a; num<=b;num++)
    {
      int i;
      for (i=2; i<num; i++) 
    {
        if(num%i==0) 
        {
            break;
        }
    }   
    if (i==num) {
    cout<<num<<endl;
    }
    }
    return 0;
}