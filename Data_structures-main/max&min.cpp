#include<bits/stdc++.h>
using namespace std;

void getmax(int arr[], int sizee){
    int maxx = INT_MIN;
    for(int i=0; i<sizee; i++){
        if(arr[i]>maxx){
            maxx = arr[i];
        }
    }
    cout<< maxx;
}
void getmin(int arr[], int sizee){
    int minn = INT_MAX;
    for(int i=0; i<sizee; i++){
        if(arr[i] < minn){
            minn = arr[i];
        }
    }
    cout<< minn;
}
int main(){
    int arr[5]={12,3,2,22,56};
    getmax(arr, 5);
    cout<<endl;
    getmin(arr, 5);
}
