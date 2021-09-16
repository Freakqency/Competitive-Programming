#include <bits/stdc++.h>

using namespace std;

class Node {
    public:
        int value;
        Node* next;
};

Node* InsertBegining(Node* head, int x) {
    Node* temp = new Node();
    temp->value = x;
    temp->next = head;
    head = temp;
    return head; 
}

void PrintNode(Node* head) {
    while (head != nullptr) {
        cout << head->value << ' ';
        head = head->next;
    }
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);    
    Node* head = nullptr;
    for (int i = 0; i < 10; i++) {
        head = InsertBegining(head, i);
    }
    PrintNode(head);
    return 0;
}