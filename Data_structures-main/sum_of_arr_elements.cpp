#include<bits/stdc++.h>
using namespace std;
int elements_sum(int arr[], int n){
    int sum = 0;
    for (int i=0; i<n; i++){
        sum= sum+arr[i];
    }
    return sum;
}
int main(){
    int arr[3]={2,33,44};
    cout<<elements_sum(arr, 3);

}
