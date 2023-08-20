#include<bits/stdc++.h>
using namespace std;

bool ispresent(int arr[], int n, int target){
    /*
    int i=0;

    while(i<n){

        if(arr[i] == target){

            return 1;
            break;
        }
        i++;
    }
    return 0;
    */
    for(int i=0; i<n; i++){
        if(arr[i]==target){
            return 1;
        }
    }
    return 0;
}
int main(){
    int arr[3]={1,2,3};
    int ans= ispresent(arr, 3, 3);
    cout<<ans;
}
