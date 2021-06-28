/*
PROBLEM =>
A shop will give discount of 10% if the cost of purchased quantity is more than 1000.
Ask user for quantity
Suppose, one unit will cost 100.
Judge and print total cost for user.

CODER =>
Mohd Mehdi

DATE =>
28/06/2021

*/

#include<iostream>
using namespace std;

int main(){
    int discount = (10/100);
    int quantity_Purchased = 0;
    int one_unit_cost = 100;
    int final_cost,total_cost = 0;
    
    cout << endl << "Enter total number of units you purchased : ";
    cin >> quantity_Purchased;
    final_cost = quantity_Purchased * one_unit_cost;

    cout << "Total Cost of purchased items : " << final_cost << endl;

    if(final_cost > 1000 ){
        int discounted_price = (10 * final_cost)/100;
        int total_cost = final_cost - discounted_price; 

        cout << "Cost after Discount : " << total_cost << endl;
    }
    else{
        cout << "Not Eligible for Discount" << endl;
    }


return 0;
}