#include<iostream>
using namespace std;

int main() {
    cout<<"---------------------------------"<<endl;
    cout<<"|    TO ADD POSITIVE NUMBERS    |"<<endl;
    cout<<"|      By MUSHARAF AAHEL.A      |"<<endl;
    cout<<"---------------------------------"<<endl;
    
    int number;
    int sum=0;

    cout << "Enter a number: ";
    cin >> number;

    while (number >= 0) {

     sum += number;
     cout << "Enter a number: ";
     cin >> number;
     }

     cout << "\nThe sum is " << sum << endl;
    

    return 0;
}