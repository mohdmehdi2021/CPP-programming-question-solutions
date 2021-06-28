/*
PROBLEM => 
The total number of students in a class are 45 out of which 25 are boys. 
If 80% of the total students secured grade 'A' out of which 17 are boys, 
then write a program to calculate the total number of girls getting grade 'A'.

CODER =>
Mohd Mehdi

DATE =>
28/06/2021

*/

#include<iostream>
using namespace std;

int main(){
    int total_students = 45,total_boys = 25;
    int A_Grade_Qualified_Students = (80 * total_students)/100;
    int A_Grade_Qualified_Boys = 17;
    int A_Grade_Qualified_Girls = A_Grade_Qualified_Students - A_Grade_Qualified_Boys;

    cout << "Total Number of girls (Qualified as A-Grade) : " << A_Grade_Qualified_Girls << endl;

return 0;
}