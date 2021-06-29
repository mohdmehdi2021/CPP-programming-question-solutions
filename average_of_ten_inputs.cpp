/*

PROBLEM =>
Take 10 integers from keyboard using loop and print their average value on the screen.

CODER =>
Mohd Mehdi

DATE =>
29/06/2021

*/

#include<iostream>
using namespace std;

int main(){

    float numbers,extra_var = 0,result,average;
    

    cout << "Enter ten numbers (one at once) : " << endl;

    for (int count = 1; count <= 10; count++)
    {
       cin >> numbers;
       extra_var = extra_var + numbers;
       average = extra_var/10;
    }

    cout << "Average : " << average;
        
return 0;
}