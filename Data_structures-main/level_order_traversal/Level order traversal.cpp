#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
  struct node *lchild, *rchild;
};

node* newnode( int data)
{
    node* temp= new node;
    temp->data= data;
    temp-> lchild= temp-> rchild= NULL;
    return temp;
}

void printnode(node* root)
{
    if(root==NULL)
        return;
    queue <node*> q1;
    q1.push(root);

    while(q1.empty()==false)
{

    node* Node = q1.front();
    cout<<Node->data<<" ";
    q1.pop();


    if(Node->lchild !=NULL)
    {
        q1.push(Node->lchild);

    }
    if(Node->rchild !=NULL)
    {
        q1.push(Node->rchild);

    }
}
}
int main()
{
    node* root= newnode(20);
    root->lchild=newnode(8);
    root->rchild=newnode(22);
    root->lchild->lchild=newnode(4);
    root->lchild->rchild=newnode(12);
    root->lchild->rchild->lchild=newnode(10);
    root->lchild->rchild->rchild=newnode(14);
    printnode(root);
    return 0;
}
