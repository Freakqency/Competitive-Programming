#include <iostream>

using namespace std;

struct Node{
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

Node* Insert(int data, Node* head){
    Node* temp = new Node();

    Node* tail = head;

    temp->data = data;
    temp->next = NULL;

    if (head == NULL){
        head = temp;
        return head;
    }

    while (tail->next != NULL)
        tail = tail->next;

    tail->next = temp;

    return head;
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

int main(){

    Node* head = NULL;

    head = Insert(2, head);
    head = Insert(4, head);
    head = Insert(6, head);
    head = Insert(8, head);
    head = Insert(10, head);
    Print(head);

    cout << "Please enter the node which you want to delete" << endl;

    int n;
    cin >> n;
    head = Delete(n, head);
    Print(head);
}
