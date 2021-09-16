#include<bits/stdc++.h>

using namespace std;

class Node {
    public:
    int data;
    Node *left, *right;
    Node(int data) {
        this->data = data;
        left = nullptr;
        right = nullptr;
    }
};

class BT {
    public:
    Node* insert(Node* root, int data) {
        if (root == nullptr) {
            Node* newNode = new Node(data);
            root = newNode;
        }
        else if (data < root->data) 
            root->left = insert(root->left, data);
        else if (data > root->data)
            root->right = insert(root->right, data);
        return root;
    }
    void PreOrder(Node* root) {
        if (root == nullptr) return;
        cout << root->data << ' ';
        PreOrder(root->left);
        PreOrder(root->right);
    }
    void InOrder(Node* root) {
        if (root == nullptr) return;
        InOrder(root->left);
        cout << root->data << ' ';
        InOrder(root->right);
    }
    void PostOrder(Node* root) {
        if (root == nullptr) return;
        PostOrder(root->left);
        PostOrder(root->right);
        cout << root->data << ' ';
    }
};

int main() {
    Node* root = nullptr;
    BT bt;
    root = bt.insert(root, 10);
    bt.insert(root, 5);
    bt.insert(root, 15);
    bt.insert(root, 5);
    bt.insert(root, 5);
    cout << "InOrder" << endl;
    bt.InOrder(root);
    cout << "PreOrder" << endl;
    bt.PreOrder(root);
    cout << "PostOrder" << endl;
    bt.PostOrder(root);
    return 0;
}