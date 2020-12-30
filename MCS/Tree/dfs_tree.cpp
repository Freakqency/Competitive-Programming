#include <iostream>

using namespace std;

class Node {
    public:
        char data;
        Node* left;
        Node* right;
        Node(char data){
            this->data = data;
            left = NULL;
            right = NULL;
        }
};

class BT {
    public:
        Node* Insert(Node* root, int data){
            if (root == NULL){
                Node* newNode = new Node(data);
                root = newNode;
            }
            else if (data < root->data)
                root->left = Insert(root->left, data);
            else if (data > root->data)
                root->right = Insert(root->right, data);
            return root;
        }
        void PreOrder(Node* root){
            if (root == NULL)
                return;
            cout << root->data << " ";
            PreOrder(root->left);
            PreOrder(root->right);
        }
        void InOrder(Node* root){
            if (root == NULL)
                return;
            InOrder(root->left);
            cout << root->data << " ";
            InOrder(root->right);
        }
        void PostOrder(Node* root){
            if (root == NULL)
                return;
            PostOrder(root->left);
            PostOrder(root->right);
            cout << root->data << " ";
        }
};

int main(){
    Node* root = NULL;
    BT bt;
    root = bt.Insert(root, 'F');
    bt.Insert(root, 'D');
    bt.Insert(root, 'B');
    bt.Insert(root, 'E');
    bt.Insert(root, 'A');
    bt.Insert(root, 'C');
    bt.Insert(root, 'J');
    bt.Insert(root, 'G');
    bt.Insert(root, 'K');
    bt.Insert(root, 'I');
    cout << "PreOrder: ";
    bt.PreOrder(root);
    cout << "\nInOrder: ";
    bt.InOrder(root);
    cout << "\n PostOrder: ";
    bt.PostOrder(root);
    return 0;
}
