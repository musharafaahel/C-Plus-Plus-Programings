#include<iostream>
using namespace std;

int main() {
    cout<<"------------------------------------------------------------------\n";
    cout<<"|  To check if a triangle is scalene, isosceles or equilateral.  |\n";
    cout<<"------------------------------------------------------------------\n";
    
    int side_a, side_b, side_c;
    cout<<"Enter the three sides of triangle :";
    cin>>side_a>>side_b>>side_c;

    if ( side_a==side_b && side_b == side_c )
    {
        cout<<"The triangle is equilateral\n";
    }
    else if( side_a==side_b || side_b == side_c || side_a==side_c )
    {
        cout<<"The triangle is isosceles \n";
    }    
    else
    {
        cout<<"The triangle is scalene\n";
    }
    

    return 0;
}