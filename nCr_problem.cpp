#include<bits/stdc++.h>
using namespace std;
int factorial(int num){
    int prod =1;
    for(int i=num; i>=1; i--){
        prod = prod*i;
    }
    return prod;
}
int nCr(){
    int n, r;
    cout<< "enter the value of n and r"<<endl;
    cin>>n>>r;
    int ans = ( factorial(n) / (factorial(r)*factorial(n-r)) );
    return ans;

}

int main(){

    cout<<"answer is: "<<nCr()<<endl;
}
