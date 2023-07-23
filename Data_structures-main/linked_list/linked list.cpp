#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
 int val;
 Node* next;

};
void printnode(Node* n)
{
    while(n != NULL)
    {
        cout<<n->val<<" "<<endl;
        n= n-> next;
    }
}
int main()
{
    Node* head;
    Node* second;
    Node* third;

    head = new Node();
    second= new Node();
    third= new Node();

    head-> val= 30;
    head-> next= second;

    second-> val= 100;
    second-> next= third;

    third-> val= 91;
    third-> next= NULL;

    printnode(head);

    return 0;
}
