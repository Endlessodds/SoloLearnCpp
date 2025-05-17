#include <iostream>
using namespace std;

int main() {
    int houses;
    cin >> houses;
// your code goes here
    double db = 2, percent;//the variable "db" is referencing dollar bill. And the probability of getting a dollar bill out of all houses visited it just 2.
    int raw; //"raw" is needed to round up for our outup 
    if (houses != 0) { // the houses visited should not be zero.
        percent = (double(db) / houses) * 100 ; //for probability percentage of getting a dollar bill
        raw = int(percent); //this cuts out decimal places. so we are only left with the integer
        if (raw<percent){//this checks if the percent is an ingeger having no decimal points 
             cout << raw+1;//if the "if" condition is true, that means, the percent has a decimal. so we round up 
             
        }
        else{
            cout<<percent;//else is executed if the percent has no decimal point. so we just print the output without round up
        }
       
    } else {
        cout << "Invalid";
    }
    return 0;
}
