#include <bits/stdc++.h>
#include "contributors.hpp"
using namespace std;
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
    Node(int x)
    {
        data = x;
        left = NULL;
        right = NULL;
    }
};
//Preorder Traversal of Trees - Recursive Approach
void preorder(struct Node *root)
{
    if (!root)
        return;
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}
//Inorder Traversal of Trees - Recursive Approach
void inorder(struct Node *root)
{
    if (!root)
        return;

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}
//PostOrder Traversal of Trees - Recursive Approach
void postorder(struct Node *root)
{
    if (!root)
        return;
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}
//Level Order Traversal of Binary Trees
void levelOrder(Node *root)
{
    if (root == NULL)
        return;

    queue<Node *> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        Node *node = q.front();
        q.pop();
        if (node != NULL)
        {
            cout << node->data << " ";
            if (node->left)
                q.push(node->left);
            if (node->right)
                q.push(node->right);
        }
        else if (!q.empty())
            q.push(NULL);
    }
}
int main()
{
    struct Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);

    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    //preorder traversal
    preorder(root);
    cout << endl;

    //inorder traversal
    inorder(root);
    cout << endl;

    //postorder traversal
    postorder(root);
    cout << endl;

    //level order traversal
    levelOrder(root);
    cout<<endl;
}