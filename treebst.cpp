#include <iostream>
using namespace std;

struct Node
{
    struct Node *left, *right;
    int data;
};
struct Node *
newNode(int val)
{
    struct Node *temp = new struct Node;
    temp->left = NULL;
    temp->right = NULL;
    temp->data = val;
    return temp;
}
struct Node *insert(struct Node *Node, int key)
{
    if (Node == NULL)
        return newNode(key);
    if (key > Node->data)
    {
        Node->left = insert(Node->left, key);
    }
    else if (key < Node->data)
    {
        Node->right = insert(Node->right, key);
    }
}
void print(struct Node *root)
{
    if (root == NULL)
        return;
    if (root->left)
        print(root->left);
    cout << root->data<<" ";
    if(root->right)
       print(root->right);

}
int main()
{
    struct Node *root = newNode(10);
    insert(root, 20);
    insert(root, 30);
    insert(root, 40);
    insert(root, 50);
    insert(root,23);
    print(root);
}

// 2 3 4 7