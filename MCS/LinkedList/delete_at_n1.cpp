#include <iostream>

using namespace std;

class Node{
    public:
    int data;
    Node* next;
};

void Print(Node* head){
    cout << "List: ";
    while (head != NULL){
        cout << head->data << " ";
        head = head->next;
    }
    cout << "\n";
}

Node* Delete(int n, Node* head){
    Node* temp = head;
    if (n == 1){
        head = temp->next;
        delete temp;
        return head;
    }
    for (int i = 0; i < n - 2; i++)
        temp = temp->next;
    Node* temp2 = temp->next;
    temp->next = temp2->next;
    delete temp2;
    return head;
}

Node* Insert(int data, Node* head){
    Node* new_node = new Node();
    new_node->data = data;
    new_node->next = NULL;
    Node* tail = head;
    if (head == NULL){
        head = new_node;
        return head;
    }
    while(tail->next != NULL)
        tail = tail->next;
    tail->next = new_node;
    return head;
}

int main(){
    Node* head = NULL;
    head = Insert(2, head);
    head = Insert(4, head);
    head = Insert(6, head);
    head = Insert(8, head);
    head = Insert(10, head);
    Print(head);
    head = Delete(2, head);
    Print(head);
}
