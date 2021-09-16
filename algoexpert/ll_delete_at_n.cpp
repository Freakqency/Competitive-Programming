#include<bits/stdc++.h>

using namespace std;

class Node {
    public:
    int data;
    Node* next;    
};

Node* insertAtFirst(Node* head, int data) {
    Node* temp = new Node();
    temp->data = data;
    temp->next = head;
    head = temp;
    return head;
}

void PrintList(Node* head) {
    while (head != nullptr) {
        cout << head->data << ' ';
        head = head->next;
    }

}

void DeleteAtN(Node** head, int n) {
    Node* temp = *head;
    if (n == 1) {
        *head = temp->next;
        delete temp;
    }
    for (int i = 0; i < n - 2; i++) temp = temp->next;
    Node* temp2 = temp->next;
    temp->next = temp2->next;
    delete temp2;
}

int main() {
    Node* head = nullptr;    
    vector<int> values{1, 1, 3, 4, 4, 4, 5, 6, 6};
    reverse(values.begin(), values.end());
    int n = values.size();
    for (int i = 0; i < n; i++) head = insertAtFirst(head, values[i]);
    PrintList(head);
    DeleteAtN(&head, 2);
    DeleteAtN(&head, 4);
    DeleteAtN(&head, 3);
    DeleteAtN(&head, 5);
    cout << '\n' ;
    PrintList(head);
    return 0;
}