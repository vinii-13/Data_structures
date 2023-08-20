#include<bits/stdc++.h>
using namespace std;

int strlength(char* arr){

    if(*arr == 0){
        return 0;
    }

    return 1 + strlength(arr+1);
}

int main(){
    char arr[] ="Answer";
    int ans = strlength(arr);
    cout<< ans;
    return 0;
}
