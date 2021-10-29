#include<iostream>

using namespace std;

class Node {
    public:
    int data;
    Node* next;
    Node(int data){
        this->data = data;
        next = NULL;
    }
};

class Stack{
    public:
    Node* top;
    Stack(){
        top = NULL;
    }

    void Push(int data){
        Node* new_node = new Node(data);
        if (top == NULL){
            top = new_node;
            return;
        }
        new_node->next = top;
        top = new_node;
    }

    void Pop(){
        if (top == NULL){
            cout << "Stack Empty";
            return;
        }
        Node* temp = top;
        top = temp->next;
        free(temp);
    }

    bool isEmpty(){
        if (top == NULL)
            return 1;
        return 0;
    }

    int Top(){
        return top->data;
    }

    void Print(){
        Node* temp = top;
        while (temp != NULL){
            cout << "stack: " << temp->data;
            temp = temp->next;
        }
        cout << "\n";
    }
};

int main(){
    Stack st;
    st.Push(10);
    st.Print();
    st.Push(20);
    st.Print();
    st.Push(30);
    st.Print();
    st.Pop();
    st.Print();
    cout << "Top: " << st.Top();
    return 0;
}
