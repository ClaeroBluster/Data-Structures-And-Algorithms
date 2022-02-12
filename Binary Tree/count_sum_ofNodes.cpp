
//Count and Sum Of nodes

#include<iostream>
#include<queue>
using namespace std;

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int val)
    {
        data=val;
        left=NULL;
        right=NULL;
    }
};

int CountNodes(Node* root)
{
    if(root==NULL)
    {
        return 0;
    }
    return CountNodes(root->left)+CountNodes(root->right)+1;
}

int SumNodes(Node* root)
{
    if(root==NULL)
    {return 0;
    }
    return SumNodes(root->left)+SumNodes(root->right)+root->data;
}


int main()
{
     Node* root=new Node(1);
     root->left=new Node(2);
     root->right=new Node(3);
    root->left->left=new Node(4);
    root->left->right=new Node(5);
    root->right->left=new Node(6);
    root->right->right=new Node(7);
     
     cout<<CountNodes(root)<<endl;
     cout<<SumNodes(root)<<endl;
}