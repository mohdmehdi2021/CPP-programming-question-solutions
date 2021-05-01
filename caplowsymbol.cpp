/* Enter any character and it will tell you whether the character is UPPERCASE,lowercase,Digit
, Special Symbol.*/

#include<iostream>
using namespace std;

int main(){

char character;
cout << "Enter any Character" << endl;
cin >> character;

// These Numbers are ASCII code of entered character
if(character >= 65 && character <= 90)
{
    cout << "UPPERCASE" << endl;
}
else if(character >= 97 && character <= 122){
    cout << "LOWERCASE" << endl;
}
else if(character >= 48 && character <= 57){
    cout << "DIGIT" << endl;
}
else if(character >= 0 && character <= 47 || character >= 58 && character <= 64 || character >= 91 && character <= 96 || character >= 123 && character <= 127){
    cout << "SPECIAL CHARACTER" << endl;
}



return 0;
}