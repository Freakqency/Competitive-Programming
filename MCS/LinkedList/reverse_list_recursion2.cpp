#include<iostream>

using namespace std;

class Node{
    public:
    int data;
    Node* next;
};

Node* Reverse(Node* head, Node* p){
    if (p->next == NULL){
        head = p;
        return head;
    }
    Reverse(head, p->next);
    Node* q = p->next;
    q->next = p;
    p->next = NULL;
    return head;
}

Node* Print(Node* head){
    while (head != NULL){
        cout << head->data << " ";
        head = head->next;
    }
    cout << "\n";
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
    head = Insert(head, 6);
    head = Insert(head, 1);
    Print(head);
    head = Reverse(head, head);
    Print(head);
    return 0;
}
