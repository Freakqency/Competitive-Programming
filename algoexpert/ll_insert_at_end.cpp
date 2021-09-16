#include <bits/stdc++.h>

using namespace std;

class Node {
    public:
        int data;
        Node* next;
};

Node* InsertAtEnd(Node* head, int x) {
    Node* temp = new Node();
    Node* current = head;
    temp->data = x;
    temp->next = nullptr;    
    if (head == nullptr) {
        head = temp;
        return head;
    }
    while (current->next != nullptr) current = current->next;
    current->next = temp;
    return head;
}

void PrintNode(Node* head) {
    while (head != nullptr) {
        cout << head->data << ' ';
        head = head->next;
    }
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);    
    Node* head = nullptr;
    for (int i = 0; i < 10; i++) head = InsertAtEnd(head, i);
    PrintNode(head);
    return 0;
}