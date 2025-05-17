#include <iostream>
using namespace std;

int main() {
    int houses;
    cin >> houses;

    double db = 2, percent;
    int raw;
    if (houses != 0) {
        percent = (double(db) / houses) * 100 ; 
        raw = int(percent);
        if (raw<percent){
             cout << raw+1;
             
        }
        else{
            cout<<percent;
        }
       
    } else {
        cout << "Invalid";
    }
    return 0;
}
