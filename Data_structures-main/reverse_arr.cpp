#include<bits/stdc++.h>
using namespace std;

void print_arr(int arr[], int n)
{
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void reverse_arr(int arr[], int n){
    int start=0;
    int ending=(n-1);

    while(start <= ending){
        swap(arr[start], arr[ending]);
        start++;
        ending --;
    }
}

int main(){
    int arr[4]= {1,2,3,4};
    int b[3]= {-1,2,-3};

    reverse_arr(arr,4);
    print_arr(arr,4);

    reverse_arr(b,3);
    print_arr(b,3);

    return 0;
}
