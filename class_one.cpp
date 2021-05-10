// How to use class in c++

#include<iostream>

using namespace std;


class Classroom{
    
    private :
    string studentName;
    int rollNumber;
    int marks_obtained;
    int max_marks;
    float percentage;

    public :
    // This will take Information from user about user.
    void getinfo(){
        cout << "Enter Your Name : " << endl;
        cin >> studentName;
        cout << "Enter roll Number : " << endl;
        cin >> rollNumber;
        cout << "Enter Marks Obtained : " << endl;
        cin >> marks_obtained;
        cout << "Enter Maximum Marks" << endl;
        cin >> max_marks;
    }

    void calculate_percentage(){
        percentage = (float)(marks_obtained * 100)/max_marks;
    }

    void displayInfo(){
        cout << "Name : " << studentName << endl;
        cout << "Roll Number : " << rollNumber << endl;
        cout << "Percentage : " << percentage << endl; 

    }

};

int main(){

Classroom highschool;

highschool.getinfo();
highschool.calculate_percentage();
highschool.displayInfo();


return 0;
}

