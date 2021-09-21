#include <iostream>

using namespace std;

struct Node{
    int data;
    Node* next;
};

void Insert(int x, Node** head){
    Node* temp = new Node();
    temp->data = x;
    temp->next = *head;
    *head = temp;
}

void Print(Node* head){
    cout << "Elements in the list:";
    while(head != NULL){
        cout << head->data << " ";
        head = head->next;
    }
    cout << "\n";
}

int main(){
    Node* head = NULL;
    int n, x;

    cout << "Please enter the number of elements in the list" << endl;
    cin >> n;
    
    for (int i = 0; i < n; i++){
        cin >> x;
        Insert(x, &head);
        Print(head);
    }
}
