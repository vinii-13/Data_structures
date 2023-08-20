#include<bits/stdc++.h>
using namespace std;
bool palindrome( char pal[], int st, int en){
    if(st >= en){
        return true;
    }
    if(pal[st] != pal[en]){
        return false;
    }
    return palindrome(pal, ++st, --en);
}
int main(){
    char st[5]={'a','a','b','a','a'};
    bool ans = palindrome(st, 0, 4);
    return ans;
}

