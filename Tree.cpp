#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int val;
    Node *lchild, *rchild;
    Node(){};
};
//function to create new node
Node* newnode(int data)
{
    Node* temp= new Node();
    temp-> val= data;
    temp->lchild= temp->rchild= NULL;
}
void print_inorder(struct Node* node)
{
    while(node == NULL)
        return;

    print_inorder(node->lchild);
    cout<<node->val<<" ";
    print_inorder(node->rchild);

}
//driver code
int main()
{
    struct Node* root= newnode(1);
    root->lchild= newnode(2);
    root->rchild= newnode(3);
    root->lchild->lchild=newnode(4);
    root->lchild->rchild=newnode(5);
    root->rchild->lchild=newnode(6);

    print_inorder(root);
    return 0;
}
