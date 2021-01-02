#include<iostream>
using namespace std;

int main() {
    int numbers;
    cout<<"Enter the number : "<<endl;
    cin>>numbers;

    for (int i = 1; i < numbers; i++)
    {
        if(i%3==0)
        {
            continue;
        }
        cout<<i<<endl;
    }
    return 0;
}