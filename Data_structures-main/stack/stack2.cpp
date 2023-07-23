/*
 stack implementation using array
 push, pop, is empty, show-top
*/
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
#define sizee 5
//class vstack()
//{
  //  public:

int stackk[sizee];
int top = -1;

bool is__empty()
{
    if(top==-1)
    {
        return true;
    }
    else
    {
        return false;
    }
}
void push(int value)
{
    if(top==sizee-1)
    {
       cout<<"!! stack is full !!"<<endl;
    }
    else
    {
        top++;
        stackk[top]= value;
    }
}
void pop()
{
    if(top==-1)
    {
        cout<<"stack is empty hence cannot perform pop operation"<<endl;
    }
        top--;

}
void show_top()
{
    if(top==-1)
    {
        cout<<"stack is empty"<<endl;
    }
    else
    {
        if(top<sizee)
        {
        cout<<stackk[top]<<endl;

        }
    }
}
void sdisplay()
{
    if(is__empty())
    {
        cout<<"stack is empty"<<endl;
    }
    else
    {
        for(int i=top; i>=0; i--)
        {
            cout<<stackk[i]<<endl;
        }
    }
}

//};
int main()
{
    is__empty();

    push(1);
    push(2);
    push(3);
    push(4);

    show_top();

    push(5);

    sdisplay();

    push(6);
    push(7);
    sdisplay();

    pop();
    pop();
    pop();
    pop();

    sdisplay();

    pop();
    pop();
    sdisplay();


    return 0;
}
