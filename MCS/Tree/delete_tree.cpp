#include <iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* left;
    Node* right;
    Node() : data(0), left(nullptr), right(nullptr) {};
    Node(int data) : data(data), left(nullptr), right(nullptr) {};
    Node(int data, Node* left, Node* right) : data(data), left(left), right(right) {};
};

class BST {
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
        void Inorder(Node* root){
            if (root == NULL)
                return;
            Inorder(root->left);
            cout << root->data << " ";
            Inorder(root->right);
        }
        Node* FindMin(Node* root){
            Node* temp = root;
            while (temp && temp->left != NULL)
                temp = temp->left;
            return temp;
        }
        Node* Delete(Node* root, int data){
            if (root == NULL)
                return root;
            else if (data < root->data)
                root->left = Delete(root->left, data);
            else if (data > root->data)
                root->right = Delete(root->right, data);
            else {
                if (root->left == NULL && root->right == NULL){
                    delete root;
                    root = NULL;
                }
                else if (root->left == NULL){
                    Node* temp = root->right;
                    delete root;
                    return temp;
                }
                else if (root->right == NULL){
                    Node* temp = root->left;
                    delete(root);
                    return temp;
                }
                else {
                    Node* temp = FindMin(root->right);
                    root->data = temp->data;
                    root->right = Delete(root->right, temp->data);
                }
            }
            return root;
        }
};

int main(){
    Node* root = NULL;
    BST bst;
    root = bst.Insert(root, 12);
    bst.Insert(root, 5);
    bst.Insert(root, 3);
    bst.Insert(root, 7);
    bst.Insert(root, 1);
    bst.Insert(root, 9);
    bst.Insert(root, 15);
    bst.Insert(root, 13);
    bst.Insert(root, 17);
    bst.Inorder(root);
    bst.Delete(root, 15);
    cout << "\n";
    bst.Inorder(root);
    return 0;
}
