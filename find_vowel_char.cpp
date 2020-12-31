#include<iostream>
using namespace std;

int main() {
    cout<<"-----------------------------------------------------\n";
    cout<<"| To check if an alphabet is a vowel or a consonant |\n";
    cout<<"-----------------------------------------------------\n";

    char a;
    cout<<"Enter a character : "<<endl;
    cin>>a;

   int isLowerCaseVowel;
   int isUpperCaseVowel;

   isLowerCaseVowel = (a=='a' || a=='e' || a=='i' || a=='o' || a=='u');
   isUpperCaseVowel = (a=='A' || a=='E' || a=='I' || a=='O' || a=='U');

   if(isLowerCaseVowel || isUpperCaseVowel)
       cout<<"The Given Character "<<a<<" is Vowel"<<endl;
   else
       cout<<"The Given Character "<<a<<" is not vowel"<<endl;
   
   return 0;
}