/*
PROBLEM =>
A student will not be allowed to sit in exam if his/her attendance is less than 75%.
Take following input from user
Number of classes held
Number of classes attended.
And print
percentage of class attended
Is student is allowed to sit in exam or not

CODER =>
Mohd Mehdi 
(B.C.A. 2nd Semester)

DATE =>
28/06/2021

*/

#include<iostream>
using namespace std;

int main(){
    int number_of_classes_held,
        number_of_classes_attended;
    int attendance_percent;

    cout << "Enter total number of classes held : " << endl;
    cin >> number_of_classes_held;
    cout << "Enter his/her attendance : " << endl;
    cin >> number_of_classes_attended;

    attendance_percent = (number_of_classes_attended * 100)/number_of_classes_held;

    cout << "Attendance Percentage : " << attendance_percent << "%" << endl;

    if(attendance_percent > 75){
        cout << "Allowed to sit in exam." << endl;
    }
    else{
        cout << "Not Allowed to sit in exam." << endl;
    }

return 0;
}