#include<bits/stdc++.h>
using namespace std;
void print_table(int n){

    if(n <= 0){
        return ;
    }

    print_table(n-1);
    cout<<"2*"<<n<<"= "<<(2*n)<<endl;
}
int main(){
    print_table(10);
    return 0;
}
