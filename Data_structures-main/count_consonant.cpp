#include<bits/stdc++.h>
using namespace std;

int countt(char* st, int index){

    if( index == strlen(st)){
        return 0;
    }
    char obj = tolower(st[index]);
    if(isalpha(obj) && obj != 'a' && obj != 'e' && obj != 'i' && obj != 'o' && obj != 'u'){
        return 1 + countt(st, index + 1);
    }
    return countt(st, index + 1);
}
int main(){
    char st[50] = "Ans wer";
    int ans = countt(st, 0);
    cout<<ans;
    return 0;
}
