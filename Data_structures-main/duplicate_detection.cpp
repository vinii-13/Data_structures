int findDuplicate(vector<int> &arr)
{
    int n = arr.size();
    int sum= (n*(n+1))/2;
    int S=0;

    for(int i=0; i<n; i++){
        S = S + arr[i];
    }
    int dif= (sum - S);
    return (n - dif);
}

int findDuplicate(vector<int> &arr)
{
    int n = arr.size();
    int ans=0;

    for(int i=0; i<n; i++){
        ans= ans^arr[i];
    }

    for(int i=0; i<n; i++){
        ans=ans^i;
    }
    return ans;
}
