#include<bits/stdc++.h>
using namespace std;
int main(){

    cout << "I'm a calculator" << endl;
    int num1, num2;
    char op;
    cout << "enter num1: "<< endl;
    cin >> num1;

    cout << "enter num2: "<< endl;
    cin >> num2;

    cout << "enter operator: "<< endl;
    cin >> op;

    switch(op){
        case '+':  cout<<(num1+num2)<<endl;
                break;

        case '-':  cout<<(num1-num2)<<endl;
                break;

        case '*':  cout<<(num1*num2)<<endl;
                break;

        case '&':  cout<<(num1&num2)<<endl;
                break;

        case '^':  cout<<(num1^num2)<<endl;
                break;

        case '%':  cout<<(num1%num2)<<endl;
                break;

        case '/':  cout<<(num1/num2)<<endl;
                break;

        default : cout<< "enter a valid operator"<<endl;
    }

    return 0;
}
