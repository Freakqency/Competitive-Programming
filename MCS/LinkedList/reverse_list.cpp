#include <iostream>

using namespace std;

class Node{
    public:
    int data;
    Node* next;
};

Node* Reverse(Node* head){
    Node *current, *next, *prev;
    current = head;
    prev = NULL;
    while (current != NULL){
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    head = prev;
    return head;
}

Node* Insert(int data, Node* head){
    Node* new_node = new Node();
    new_node->data = data;
    new_node->next = NULL;
    if (head == NULL){
        head = new_node;
        return head;
    }
    Node* tail = head;
    while(tail->next != NULL)
        tail = tail->next;
    tail->next = new_node;
    return head;
}

void Print(Node* head){
    while(head != NULL){
        cout << head->data << " ";
        head = head->next;
    }
    cout << "\n";
}

int main(){
    Node* head = NULL;
    head = Insert(2, head);
    head = Insert(4, head);
    head = Insert(6, head);
    head = Insert(8, head);
    head = Insert(10, head);
    Print(head);
    head = Reverse(head);
    Print(head);
}
