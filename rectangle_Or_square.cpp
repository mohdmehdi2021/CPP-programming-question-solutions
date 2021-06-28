/*
PROBLEM =>
Take values of length and breadth of a rectangle from user and check if it is square or not.

CODER =>
Mohd Mehdi

DATE =>
28/06/2021

*/

#include<iostream>
using namespace std;

int main(){
    int length,breadth;
    cout << "Enter Length : " << endl;
    cin >> length;
    cout << "Enter Breadth : " << endl;
    cin >> breadth;

    if(length == breadth){
        cout << "Square" << endl;
    }
    else{
        cout << "Rectangle" << endl;
    }

return 0;
}