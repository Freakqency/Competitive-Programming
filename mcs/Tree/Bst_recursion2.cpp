#include <iostream>

using namespace std;

class BstNode{
    public:
        int data;
        BstNode* left;
        BstNode* right;
        BstNode(int data){
            this->data = data;
            left = NULL;
            right = NULL;
        }
};

class BST{
    public:
        BstNode* Insert(BstNode* root, int data){
            if (root == NULL){
                BstNode* newNode = new BstNode(data);
                root = newNode;
            }
            else if (data < root->data)
                root->left = Insert(root->left, data);
            else if (data > root->data)
                root->right = Insert(root->right, data);
            return root;
        }
        bool Search(BstNode* root, int key){
            if (root == NULL)
                return false;
            else if (root->data == key)
                return true;
            else if (key < root->data)
                Search(root->left, key);
            else if (key > root->data)
                Search(root->right, key);
        }
        void Inorder(BstNode* root){
            if (root == NULL)
                return ;
            Inorder(root->left);
            cout << root->data << "->";
            Inorder(root->right);
        }
};

int main(){
    BstNode* root = NULL;
    BST bst;
    root = bst.Insert(root, 8);
    bst.Insert(root, 1);
    bst.Insert(root, 3);
    bst.Insert(root, 6);
    bst.Insert(root, 14);
    bst.Insert(root, 7);
    bst.Insert(root, 10);
    bst.Inorder(root);
    cout << "\n";
    cout << bst.Search(root, 12);
    return 0;
}
