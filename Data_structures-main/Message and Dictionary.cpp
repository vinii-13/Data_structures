/*
QN. so there's a ' string dictionary ' containing words separated with space and starting with capital. 
    Then theres another 'string message' containing a sentence , with only starting alphabet capital for the first word, 
    like a usual english sentence. We need to check if the words present in message are present in dictionary as well. 
    In case the word is present, keep it as it is in string answer, else use "###" and return the string answer after iterating the message completely.
*/

#include<bits/stdc++.h>
using namespace std;
string solve(string& message, string& dict){
    string ans ="";
    
    stringstream dictStream(dict);
    unordered_set<string> set;
    string word ="";
    while(dictStream >> word){
        set.insert(word);
    }
    
    stringstream messStream(message);
    string i = "";
    while(messStream >> i){
        if(ans.empty()){ // ans empty hai = first word
            string w = string(1, toupper(i[0])) + i.substr(1, i.length());
            if(set.find(w) != set.end()){
                ans += i;
                ans += " ";
            }
            else{
                ans += "### ";
            }
        }
        else{ // following words
            string w = string(1, toupper(i[0])) + i.substr(1, i.length());
            if(set.find(w) != set.end()){
                ans += i;
                ans += " ";
            }
            else{
                ans += "### ";
            }
        }
        
    }
    return ans;
}
int main(){
    string a = "This is a message", b= "This Can Will Message";
    string ans = solve(a,b);   
    cout<<ans;
    return 0;
}
