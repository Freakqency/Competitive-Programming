#include <iostream>

using namespace std;

class Node {
    public:
        int data;
        Node* left;
        Node* right;
        Node() : data(0), left(nullptr), right(nullptr) {};
        Node(int data) : data(data), left(nullptr), right(nullptr) {};
};

class BST {
    public:
        Node* Insert(Node* root, int data){
            if (root == nullptr){
                Node* newNode = new Node(data);
                root = newNode;
            }
            else if (data <= root->data)
                root->left = Insert(root->left, data);
            else if (data > root->data)
                root->right = Insert(root->right, data);
            return root;
        }
        void InOrder(Node* root){
            if (root != nullptr){
                InOrder(root->left);
                cout << root->data << " ";
                InOrder(root->right);
            }
        }
        Node* FindMin(Node* root){
            while (root->left != nullptr)
                root = root->left;
            return root;
        }
        Node* Find(Node* root, int data){
            if (root == nullptr || root->data == data)
                return root;
            else if (data < root->data)
                return Find(root->left, data);
            return Find(root->right, data);
        }
        Node* GetSuccessor(Node* root, int data){
            Node* current = Find(root, data);
            if (current == nullptr)
                return current;
            else if (current->right != nullptr)
                return FindMin(current->right);
            Node* ancestor = root;
            Node* successor = nullptr;
            while (ancestor != current){
                if (current->data < ancestor->data){
                    successor = ancestor;
                    ancestor = ancestor->left;
                }
                else {
                    ancestor = ancestor->right;
                }
            }
            return successor;
        }
};

int main(){
    Node* root = nullptr;
    BST bst;
    root = bst.Insert(root, 10);
    bst.Insert(root, 20);
    bst.Insert(root, 11);
    bst.Insert(root, 7);
    bst.Insert(root, 15);
    bst.Insert(root, 12);
    bst.Insert(root, 9);
    bst.InOrder(root);
    cout << "\n";
    Node* suc = bst.GetSuccessor(root, 11);
    cout << suc->data;
    return 0;
}
