/*

PROBLEM =>
Print multiplication table of 24, 50 and 29 using loop.

CODER =>
Mohd Mehdi

DATE =>
29/06/2021

*/

#include<iostream>
using namespace std;

int main(){

    cout << endl << "Multiplication Table of 24 : " << endl;
    for (int i = 1; i <= 10; i++)
    {
        cout << "24 x " << i << " = " << 24*i << endl;
    }

    cout << endl << "Multiplication Table of 50 : " << endl;
    for (int j = 1; j <= 10; j++)
    {
        cout << "50 x " << j << " = " << 50*j << endl;
    }

    cout << endl << "Multiplication Table of 29 : " << endl;
    for (int k = 1; k <= 10; k++)
    {
        cout << "29 x " << k << " = " << 29*k << endl;
    }

return 0;
}