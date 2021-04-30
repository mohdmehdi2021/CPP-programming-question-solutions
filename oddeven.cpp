/* Any integer is input through the keyboard. Write a program to find out whether the given
 number is odd or even. */

 // Coder = Mohd Mehdi
 // Date = 30/04/2021

#include<iostream>
using namespace std;

int main(){

int number;
cout << "Enter any Number" << endl;
cin >> number;
if(number % 2 == 0){
cout << "The Number Is Even";
}
else{
    cout << "The Number Is Odd";
}


return 0;
}

