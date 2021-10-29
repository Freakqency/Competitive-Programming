#include<iostream>
#include<stack>

using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this->data = data;
        next = NULL;
    }
};

class LinkedList{
    public:
    Node* head;
    LinkedList(){
        head = NULL;
    }

    void InsertAtBegining(int data){
        Node* new_node = new Node(data);
        if (head == NULL){
            head = new_node;
            return;
        }
        new_node->next = head;
        head = new_node;
    }

    void Print(){
        Node* temp = head;
        while (temp != NULL){
            cout << temp->data << " ";
            temp = temp->next;
        }
    }

    void Reverse(){
        stack<Node*> st;
        Node* temp1 = head;
        while (temp1 != NULL){
            st.push(temp1);
            temp1 = temp1->next;
        }
        Node* temp = st.top();
        head = temp;
        st.pop();
        while (!st.empty()){
            temp->next = st.top();
            st.pop();
            temp = temp->next;
        }
        temp->next = NULL;
    }
};


int main(){
    LinkedList ll;
    ll.InsertAtBegining(10);
    ll.InsertAtBegining(20);
    ll.InsertAtBegining(30);
    ll.InsertAtBegining(40);
    ll.InsertAtBegining(50);
    ll.Print();
    cout << "\n";
    ll.Reverse();
    ll.Print();
    return 0;
}
