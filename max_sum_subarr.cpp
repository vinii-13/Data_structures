#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[9]={1,2,7,-4,3,2};
    int sum=0; int maxx=arr[0];
    for(int i=0;i<sizeof(arr);i++)
        {
        sum= sum+arr[i];
        maxx= max(maxx,sum);
            if(sum<0)
                {
                    sum=0;
                }
        }
    return maxx;
}
