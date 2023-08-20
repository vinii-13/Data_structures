#include<bits/stdc++.h>
using namespace std;
int fibonnacci(int n){
    if(n<=1){
        return n;
    }
    return fibonnacci(n-1) + fibonnacci(n-2);
}
int main(){
    cout<< fibonnacci(0)<<endl;
    cout<< fibonnacci(1)<<endl;
    cout<< fibonnacci(2)<<endl;
    cout<< fibonnacci(3)<<endl;
    cout<< fibonnacci(4)<<endl;
    cout<< fibonnacci(5)<<endl;


}

