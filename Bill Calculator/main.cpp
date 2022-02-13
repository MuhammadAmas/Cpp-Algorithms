#include <iostream>
using namespace std;
int main(){
    float rate1, rate2, rate3, rate4, units, bill;
    
    rate1 = 9.35, rate2 = 11.67, rate3 = 13.76, rate4 = 22.88;
    
    cout<<"Enter the number of units used: ";
    cin>>units;
    if (units < 100){
        bill = units * rate1;
        cout<<"Total Bill = "<<bill;
    }    
    else if (units < 200){
        bill = units * rate2;
        cout<<"Total Bill = "<<bill;
    }
    else if (units < 300){
        bill = units * rate3;
        cout<<"Total Bill = "<<bill;
    }
    else{
        bill= units*rate4;
        cout<<"Total Bill = "<<bill;
        return 0;
    }
}

