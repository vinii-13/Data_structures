#include<bits/stdc++.h>
using namespace std;

void swap_alternate(int arr[], int n){

    for( int i=0; i<n ; i+=2){
        if(i<n){
            swap(arr[i], arr[i+1]);
        }
    }
}
void print_arr(int arr[], int n){
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){

    int even[4]= {1,2,3,4};
    int odd[5]= {11,22,33,44,55};

    swap_alternate(even, 4);
    print_arr(even, 4);

    return 0;
}
