/*

PROBLEM => Write a program to enter a 4 digit number from the keyboard. 
Add 8 to the number and then divide it by 3. Now, the modulus of that number is taken with 
5 and then multiply the resultant value by 5.
Display the final result.

AUTHOR => Mohd Mehdi
DATE => 27/06/2021

*/

#include<iostream>

using namespace std;

int main(){
    int result,number;
    cout << "Enter 4 digit number" << endl;
    cin >> number;
    result = ((((number + 8)/3)%5)*5);
    cout << "Result : " << result;
    return 0;
}