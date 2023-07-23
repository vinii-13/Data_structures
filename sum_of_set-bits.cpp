#include<bits/stdc++.h>
using namespace std;
int setbits(int a){
    int countt = 0;
    while( a!=0 ){
        if(a&1==1){
            countt++;
        }
        a=a>>1;
    }
    return countt;
}

int main(){
    int a, b;
    cout<<"enter a and b"<<endl;
    cin>>a; cin>>b;
    int ans = setbits(a) + setbits(b);
    cout<<"ans is: "<<ans;
}
