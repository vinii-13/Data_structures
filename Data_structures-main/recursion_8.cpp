#include<bits/stdc++.h>
using namespace std;
int digitsum(int num){

    if(num == 0){
        return 0;
    }
    return ((num%10) + digitsum(num/10));
}
int main(){
    cout << digitsum(25)<<endl;
}
