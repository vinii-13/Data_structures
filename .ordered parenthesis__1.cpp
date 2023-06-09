#include<bits/stdc++.h>
//#include<iostream>
using namespace std;

bool balanced(string exp)
{
    stack<char> s;
    for(int i=0; i<exp.length(); i++)
    {
        char curr_char= exp[i];
        if(curr_char== '{' || curr_char== '[' || curr_char== '(')
            {
                s.push(curr_char);
            }
        else if(curr_char=='}')
        {
            if(s.empty()){
                return false;
            }
            char last=s.top();
            s.pop();
            if(last!='{')
                {
                    return false;
                }
        }
        else if(curr_char==']')
        {
            if(s.empty()){
                return false;
            }
            char last=s.top();
            s.pop();
            if(last!='[')
                {
                    return false;
                }

        }
        else if(curr_char==')')
        {
            if(s.empty()){
                return false;
            }
            char last=s.top();
            s.pop();
            if(last!='(')
                {
                    return false;
                }
        }

    }
    if(s.empty())
    {
        return true;
    }
    else{
        return false;
    }

}
int main()
{
    cout<<balanced("{[}");
}
