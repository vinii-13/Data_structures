#include<bits/stdc++.h>
using namespace std;
void printnum(int n){

    if(n <= 0){
        return ;
    }
    cout<<"num is "<<n<<endl;

    printnum(n-1);
    cout<<"num = "<<n<<endl;
}
int main(){
    printnum(5);
    return 0;
}
