#include <iostream>
#include <queue>

using namespace std;

class Node {
    public:
        char data;
        Node* left;
        Node* right;
        Node (int data){
            this->data = data;
            left = NULL;
            right = NULL;
        }
};

class BST{
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
        
        void LevelOrder(Node* root){
            if (root == NULL)
                return;
            queue<Node*> Q;
            Q.push(root);
            while (!Q.empty()){
                Node* current = Q.front();
                cout << "Data: " << current->data;
                if (current->left != NULL)
                    Q.push(current->left);
                if (current->right != NULL)
                    Q.push(current->right);
                Q.pop();
            }
        }
};

int main(){
    Node* root = NULL;
    BST bst;
    root = bst.Insert(root, 'A');
    bst.Insert(root, 'B');
    bst.Insert(root, 'E');
    bst.Insert(root, 'Z');
    bst.Insert(root, 'I');
    bst.LevelOrder(root);
    return 0;
}
