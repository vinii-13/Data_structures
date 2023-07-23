#include<bits/stdc++.h>
using namespace std;
//fn for power of a num

int power(){
    int a; int b;
    int ans=1;
    cout<<"enter num and power: ";
    cin>>a>>b;
    for(int i=0 ;i<b; i++){
        ans= ans*a;
    }
    return ans;

}

int main(){
    int answer = power();
    cout<< "the answer is: "<<answer<< endl;
    return 0;
}
