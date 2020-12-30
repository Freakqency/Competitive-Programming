#include <iostream>

using namespace std;

struct Node{
    int data;
    Node* next;
};

Node* Insert(Node* head, int x){
    Node* temp = new Node();
    temp-> data = x;
    temp->next = head;
    head = temp;

    return head;
}

void Print(Node* head){
    cout << "Values in list: ";

    while (head != NULL){
        cout << head->data << " ";
        head = head->next;
    }

    cout << " \n";
}

int main(){
    Node* head = NULL;
    int n, x;

    cout << "Please enter the number of elements you want to enter \n";
    cin >> n;

    for (int i = 0; i < n; i++){
        cin >> x;
        head = Insert(head, x);
        Print(head);
    }
}
