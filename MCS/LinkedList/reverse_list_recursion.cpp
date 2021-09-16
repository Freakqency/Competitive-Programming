#include <iostream>

using namespace std;

class Node{
    public:
    int data;
    Node* next;
};

void Print(Node* head){
    if (head == NULL){
        return;
    }
    cout << head->data;
    Print(head->next);
}

void Print_Reverse(Node* head){
    if (head == NULL) return;
    Print_Reverse(head->next);
    cout << head->data;
}

Node* Insert(Node* head, int data){
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

int main(){
    Node* head = NULL;
    head = Insert(head, 2);
    head = Insert(head, 4);
    head = Insert(head, 5);
    head = Insert(head, 1);
    Print(head);
    cout << "\n";
    Print_Reverse(head);
}
