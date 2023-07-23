#include<bits/stdc++.h>
using namespace std;

bool iseven(){
    int num;
    cout<< "enter your number:- "<<endl;
    cin>>num;

    //odd numbers end with 1 in binary;
    if(num&1){
        return 0;
    }
    return 1;
}

int main(){

    if(iseven()){
        cout<<"number is even"<<endl;
    }
    else{
        cout<< "num is odd"<<endl;
    }
    //return 0;
}
