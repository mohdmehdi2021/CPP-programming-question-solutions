/*

PROBLEM =>
Print ASCII values and their equivalent characters. ASCII value vary from 0 to 255.

CODER =>
Mohd Mehdi

DATE =>
03/07/2021

*/

#include<iostream>
using namespace std;

int main(){
    for (int iterator = 0; iterator <= 255; iterator++)
    {
        cout << iterator << " = " << (char) iterator << endl;   
    }

return 0;
}