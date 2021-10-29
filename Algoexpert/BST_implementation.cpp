#include<bits/stdc++.h>

using namespace std;

class BST {
public:
    int value;
    BST* left;
    BST* right;

    BST(int val) {
        value = val;
        left = nullptr;
        right = nullptr;
    }

    BST &insert(int val) {
        if (val < value) {
            if (left == nullptr) {
                BST* newNode = new BST(val);
                left = newNode;
            }
            else left->insert(val);
        }
        else if (val > value) {
            if (right == nullptr) {
                BST* newNode = new BST(val);
                right = newNode;
            }
            else right->insert(val);
        }
        return *this;
    }
    bool contains(int val) {
        if (val < value)  {
            if (left != nullptr)  return false;
            else left->contains(val);
        }
        else if (val > value) {
            if (right == nullptr) return false;
            else right->contains(val);
        }
        return true;
    }
    BST &remove(int val, BST* parent = nullptr) {
        if (val < value) 
            if (left != nullptr) left->remove(val);        
        else if (val > value) 
            if (right != nullptr) right->remove(val);
        else {
        }
        return *this;
    }
};

int main() {
    BST* root = new BST(10);
    root->left = new BST(5);
    root->right = new BST(12);
    cout << root->contains(2) << endl;
    return 0;
}