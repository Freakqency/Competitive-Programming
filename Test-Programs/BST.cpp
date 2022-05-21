#include<bits/stdc++.h>

using namespace std;


struct Node
{
    int data;
    struct Node* left, *right;
    Node(int data)
    {
        this->data = data;
        left = right = NULL;
    }
};

int dfs(struct Node* root, int currSum) {
    currSum += root->data;
    for (auto child : root.)
        dfs(child, currSum);
    return sum;
}

int main()
{
    struct Node *root = new Node(1);
    root->left             = new Node(2);
    root->right         = new Node(3);
    root->left->left     = new Node(4);
    root->left->right = new Node(5);

    cout << dfs(root) << '\n';
 
    return 0;
}
