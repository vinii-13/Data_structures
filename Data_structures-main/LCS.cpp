#include<bits/stdc++.h>
using namespace std;
int solve(string& a, string&b, int m, int n, vector<vector<int>>& dp){
    int ans = 0;
    if(m == a.length()){
        return 0;
    }
    if(n == b.length()){
        return 0;
    }
    if(dp[m][n] != -1){
        return dp[m][n];
    }
    if(a[m] == b[n]){
        ans = 1 + solve(a, b, m+1, n+1, dp);
    }
    else{
        ans = max(solve(a, b, m+1, n, dp), solve(a, b, m, n+1, dp));
    }
    return dp[m][n] = ans;
}
int main(){
    string s1 = "abbacc";
    string s2 = "baccd";
    vector<vector<int>>dp(s1.length(), vector<int>(s1.length(), -1)) ;
    int ans = solve(s1, s2, 0, 0, dp);
    cout<<ans;
    return 0;
}
