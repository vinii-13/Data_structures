#include<bits/stdc++.h>
using namespace std;
void print_reverse(int n){

    if(n >10){
        return ;
    }

    print_reverse(n+1);
    cout<<"2*"<<n<<"= "<<(2*n)<<endl;
}
int main(){
    print_reverse(1);
    return 0;
}
