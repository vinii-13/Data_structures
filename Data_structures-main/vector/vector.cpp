#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
/*
{
    int arr[5];
    for(int n=0; n<5; n++)
    {
        cin>>arr[n];
    }
    for(int i=4; i>=0;i--)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}
*/

{
    vector<int> vect{ 1, 11, 111 };
    for (int x : vect)
        cout << x << " "<<endl;
    for(auto it= vect.end()-1; it>= vect.begin(); it--)
        cout<< *it <<endl;


    return 0;
}

