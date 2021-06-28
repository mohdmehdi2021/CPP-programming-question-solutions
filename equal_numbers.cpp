/*
PROBLEM => Enter two numbers from keyboard. Write a program to check if 
the two numbers are equal.

AUTHOR => Mohd Mehdi
DATE => 27/06/2021

*/

/* ------------------------------ START --------------------------------- */

#include<iostream>
using namespace std;

int main(){
int num1, num2;
cout << "Enter Number 1 : ";
cin >> num1;

cout << "Enter Number 2 : ";
cin >> num2;

if(num1 == num2){
    cout << "Both Numbers are equal";
}
else{
    cout << "Numbers are not equal";
}

return 0;
}