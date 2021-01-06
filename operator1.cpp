#include<iostream>
using namespace std;
 
int main() {
    int i;
    i=1;
    //1 + 3 =4
    i= i++ + ++i;
    cout<<i<<endl;
    return 0;
}