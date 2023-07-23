#include<bits/stdc++.h>
using namespace std;
int main(){
    int amount;

    cout<<"enter your amount"<<endl;
    cin>>amount;
    if(amount > 0){
    switch(amount >= 100){
        case 1:
            cout<< "no. of 100 notes = "<<(amount/100)<<endl;
            amount = amount%100;
            break;
        }
    switch(amount >= 50){
        case 1: cout<< "no. of 50 notes = "<< (amount/50)<<endl;
            amount = amount%50;
            break;
    }
    switch(amount >= 20){
        case 1: cout<< "no. of 20 notes = "<< (amount/20)<<endl;
            amount = amount%20;
            break;
    }
    switch(amount >= 10){
        case 1: cout<< "no. of 10 notes = "<< (amount/10)<<endl;
            amount = amount%10;
            break;
    }
    switch(amount < 10){
        default: cout<< "and you will have "<< amount << " rupees remaining" <<endl;
        }
    }
    else{
        cout<< "enter a valid amount"<<endl;
    }
    return 0;

}
