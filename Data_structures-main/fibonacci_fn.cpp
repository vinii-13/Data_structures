#include<bits/stdc++.h>
using namespace std;

void fibonnaci(int n){
    int a = 0;
    int b = 1;
    //int sum= (a+b);
    cout<<a<<" "<<b<<" ";
    for(int i=1; i<(n-1) ;i++){
        cout<<(a+b)<<" ";
        a = b;
        b = i;
    }
}
int main(){
    int n;
    cout<<"enter value of n: ";
    cin>>n;
    fibonnaci(n);
}
