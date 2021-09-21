#include <iostream>

using namespace std;

struct Node{
    int data;
    Node* next;
};

void Print(Node* head){
    cout << "Values in List: ";
    while (head != NULL){
        cout << head->data << " ";
        head = head->next;
    }
    cout << "\n";
}

Node* Insert(int data, int n, Node* head){
    Node* temp1 = new Node();
    temp1->data = data;
    temp1->next = NULL;

    if (n == 1){
        temp1->next = head;
        head = temp1;
        return head;
    }

    Node* temp2 = head;

    for (int i = 0; i < n - 2; i++){
        temp2 = temp2->next;
    }

    temp1->next = temp2->next;
    temp2->next = temp1;
    return head;
}

int main(){
    Node* head = NULL;
    head = Insert(2, 1, head);
    head = Insert(3, 2, head);
    head = Insert(4, 3, head);
    head = Insert(5, 3, head);
    head = Insert(1, 1, head);
    Print(head); // LIST: 1,2, 3, 5, 4
}
