#include<bits/stdc++.h>
using namespace std;

char upper1(char* up, int first, int last){

    if( first >= last){
        return -1;
    }
        if( up[first] >= 65 && up[first] <= 90){
            return up[first];
        }
        return upper1(up, first +1, last);

}

int main(){

    char arr[50] ={"aNswer"};
    int ans = upper1(arr, 0, strlen(arr)-1);
    cout<< ans;
    return 0;
}
