#include <iostream>
using namespace std;

int main() {
    int houses;
    cin>>houses;

    //your code goes here
    
  int dollarbill = houses/2;
  if (houses >=3){      
        cout<<int((dollarbill/houses)*100)+1;     
    }
    else{
        cout<<"Invalid";
    }
    return 0;
} 
