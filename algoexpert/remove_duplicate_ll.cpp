#include <bits/stdc++.h>

using namespace std;

class Node {
    public:
        int data;
        Node* next = NULL;        
};

void InsertAtEnd(Node** head, int data) {
    Node* current = *head;
    Node* temp = new Node();
    temp->data = data;
    temp->next = NULL;
    if (*head == NULL) {
        *head = temp;
        return;
    }
    while (current->next != NULL) current = current->next;
    current->next = temp;
}

void PrintList(Node* head) {
    while (head != NULL) {
        cout << head->data << ' ';
        head = head->next;
    }
}

void DeleteAtN(Node** head, int n) {
    if (*head == NULL) return;
    Node* temp = *head;
    if (n == 0) {
        *head = temp->next;
        free(temp);
        return;
    }
    for (int i = 0; temp != NULL &&  i < n - 1; i++) temp = temp->next;
    if (temp == NULL || temp->next == NULL) return;
    Node* next = temp->next->next;
    free(temp->next);
    temp->next = next;
}

void RemoveDuplicates(Node** head) {
    Node* current = *head;
    vector<int> dup;
    int counter = 0;
    while (current->next != NULL) {
        int temp = current->data;
        current = current->next;
        if (current->data == temp) dup.push_back(counter);
        counter++;
    }
    for (auto i : dup) cout << i << endl;
    Node* curr = *head;
    for (auto i : dup) {
        DeleteAtN(&curr, i + 1);
    }
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);    
    Node* head = NULL;
    vector<int> values = {1, 1, 3, 4, 4, 4, 5, 6, 6};
    int n = values.size();
    for (int i = 0; i < n; i++) InsertAtEnd(&head, values[i]);
    // PrintList(head);
    RemoveDuplicates(&head);
    cout << '\n';
    PrintList(head);
    return 0;
}