#include<bits/stdc++.h>
using namespace std;

struct Treenode{
    int val;
    Treenode* left;
    Treenode* right;

    Treenode(int value): val(value), left(nullptr), right(nullptr){}
};

void printnode( Treenode* root){
    if(root == nullptr){
        return;
    }
    if(root->left == nullptr && root->right == nullptr){
        cout<<root->val<<endl;
    }
    printnode(root->left);
    printnode(root-> right);
}
int main(){
    Treenode* root = new Treenode(1);
    root->left = new Treenode(2);
    root->right = new Treenode(3);
    root->left->left = new Treenode(4);
    root->left->right = new Treenode(5);
    printnode(root);
    cout<< endl;

    return 0;
}
