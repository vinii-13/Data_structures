#include<bits/stdc++.h>
using namespace std;
int ed(string &a, string &b, int m, int n, vector<vector<int>>& dp){

    if( m == 0){
        return n;
    }
    if( n == 0){
        return m;
    }

    if(dp[m][n] != 0){
        return dp[m][n];
    }
    int ans = 0;

    if(a[m-1] == b[n-1]){
        return ed(a, b, m-1, n-1, dp);
    }
    else{
        int x = ed(a, b, m-1, n, dp);
        int y = ed(a, b, m, n-1, dp);
        int z = ed(a, b, m-1, n-1, dp);
        ans =  1 + min(x, min(y, z));
    }
    return dp[m][n] = ans;
}
int main(){
    string a = "PIN";
    string b = "PUN";
    int m = a.length();
    int n = b.length();
    vector<vector<int>> dp(m+1, vector<int>(n+1, 0));

    int ans = ed(a, b, m, n, dp);
    cout<<ans<<endl;
    return 0;
}
