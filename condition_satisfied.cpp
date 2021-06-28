/*
PROBLEM => Write a program to enter the values of two variables 'a' and 'b'
 from keyboard and then check if both the conditions 'a < 50' and 'a < b' are true.

CODER => Mohd Mehdi
DATE => 28/06/2021

*/
#include<iostream>
using namespace std;

int main(){
int a,b;
cout << "Enter Value of 'a' : " << endl;
cin >> a;
cout << "Enter Value of 'b' : " << endl;
cin >> b;

if(a < 50 && a < b){
    cout << "Alright! Conditions met." << endl;
}
else{
    cout << "Conditions did'nt met." << endl;
}
return 0;
}