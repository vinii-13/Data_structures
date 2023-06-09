#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main(){
    vector<int>nums ={1,2,3,4,5,6,7,8};
    int sum =0;
    for(int i=0;i<nums.size();i++)
    {
        sum=sum+nums[i];
    }
    cout<<sum;
    return 0;
}
