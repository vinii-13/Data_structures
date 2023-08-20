#include<bits/stdc++.h>
using namespace std;
int ropes(int l, int a, int b,  int c){
    if(l == 0){
        return 0;
    }
    if(l < 0)
        return -1;

    int res = max(ropes(l-1, a, b, c), max(ropes(l-b, a, b, c), ropes(l-c, a, b, c)));
    if(res == -1){
        return -1;
    }
    return 1 + res;
}
int main(){
    int l=5;
    int a = 1;
    int b = 7;
    int c= 6;

    int ans = ropes(l, a, b, c);
    cout<< ans;
}
