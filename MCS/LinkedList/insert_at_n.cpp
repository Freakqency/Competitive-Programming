#include <iostream>

using namespace std;

struct Node{
    int data;
    Node* next;
};

Node* Insert(int data, int n, Node* head){
    Node* temp = new Node();
    temp->data = data;
    temp->next = NULL;
    if (n == 1){
        temp->next = head;
        head = temp;
        return head;
    }
    Node* temp1 = new Node();
    for (int i = 0; i < n - 2; i++) temp1 = temp1->next;
    temp1->next = temp->next;
    temp1->next = temp;
    return head;
}

void Print(Node* head){
    cout << "List value equals: ";
    while(head != NULL){
        cout << head->data << " ";
        head = head->next;
    }
    cout << "\n";
}

int main(){
    Node* head = NULL;
    head = Insert(2, 1, head); //List : 2
    head = Insert(3, 2, head); //List : 2 3
    head = Insert(4, 3, head); //List : 2 3 4
    head = Insert(5, 2, head); //List : 2 5 3 4 
    head = Insert(1, 3, head); //List : 2 5 1 3 4
    Print(head);
}
