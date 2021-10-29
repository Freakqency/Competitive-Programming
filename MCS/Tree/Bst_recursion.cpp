#include <iostream>

using namespace std;

class BstNode{
    public:
        int data;
        BstNode* left;
        BstNode* right;
};

class BST{
    public:
        BstNode* GetNode(int data){
            BstNode* newNode = new BstNode();
            newNode->data = data;
            newNode->left = NULL;
            newNode->right = NULL;
            return newNode;
        }
        BstNode* Insert(BstNode* rootPtr, int data){
            if (rootPtr == NULL)
                rootPtr = GetNode(data);
            else if (data < rootPtr->data)
                rootPtr->left = Insert(rootPtr->left, data);
            else if (data > rootPtr->data)
                rootPtr->right = Insert(rootPtr->right, data);
            return rootPtr;
        }
        void Inorder(BstNode* rootPtr){
            if (rootPtr == NULL)
                return;
            Inorder(rootPtr->left);
            cout << rootPtr->data << "->";
            Inorder(rootPtr->right);
        }
};

int main(){
    BstNode* rootPtr = NULL;
    BST bst;
    rootPtr = bst.Insert(rootPtr, 8);
    bst.Insert(rootPtr, 3);
    bst.Insert(rootPtr, 1);
    bst.Insert(rootPtr, 6);
    bst.Insert(rootPtr, 7);
    bst.Insert(rootPtr, 10);
    bst.Insert(rootPtr, 14);
    bst.Insert(rootPtr, 4);
    bst.Inorder(rootPtr);
    return 0;
}
