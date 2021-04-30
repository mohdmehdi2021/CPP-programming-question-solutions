/* If Cost Price and Selling Price of an item are input through the keyboard. Write a program 
to determine whether the seller has made profit or incurred loss. Also determine how much profit
he made or loss he incurred.*/
// Coder = Mohd Mehdi
// Date = 30/04/2021


#include<iostream>
using namespace std;

int main(){

int cost_price,sell_price,difference;

cout << "Enter Cost Price" << endl;
cin >> cost_price;
cout << "Enter Selling Price" << endl;
cin >> sell_price;

difference = sell_price - cost_price;

if(sell_price > cost_price){
cout << "You have gained profit, PKR " << difference << endl;
}
else{
cout << "You have incurred loss, PKR " << abs(difference) << endl;
}

return 0;
}