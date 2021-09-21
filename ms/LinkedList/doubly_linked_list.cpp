#include<iostream>

using namespace std;

struct Node {
    int data;
    Node* next;
    Node* prev;
    Node(int data){
        this->data = data;
        next = NULL;
        prev = NULL;
    }
};

struct LinkedList {
    Node* head;
    LinkedList(){
        head = NULL;
    }

    void InsertAtBegining(int data){
        Node* new_node = new Node(data);
        if (head == NULL){
            head = new_node;
            return;
        }
        head->prev = new_node;
        new_node->next = head;
        head = new_node;
    }

    void Print(Node* head){
        Node* temp = head;
        while (temp != NULL){
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << "\n";
    }

    void InsertAtEnd(int data){
        Node* new_node = new Node(data);
        if (head == NULL){
            head = new_node;
            return;
        }
        Node* tail = head;
        while (tail->next != NULL)
            tail = tail->next;
        new_node->prev = tail;
        tail->next = new_node;
    }

    void ReversePrint(Node* head){
        Node* temp = head;
        while (temp->next != NULL)
            temp = temp->next;

        while (temp != NULL){
            cout << temp->data << " ";
            temp = temp->prev;
        }
        cout << "\n";
    }
};

int main(){
    LinkedList ll;
    ll.InsertAtEnd(10);
    ll.InsertAtEnd(30);
    ll.InsertAtEnd(20);
    ll.InsertAtEnd(40);
    ll.InsertAtEnd(50);
    ll.Print(ll.head);
    ll.ReversePrint(ll.head);
    return 0;
}
