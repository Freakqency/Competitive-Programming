#include<iostream>

using namespace std;

struct Node{
    int data;
    Node* next;
    Node(int data){
        this->data = data;
        next = NULL;
    }
};

struct LinkedList{
    Node* head;
    LinkedList(){
        head = NULL;
    }

    void Print(){
        Node* temp = head;
        while (temp != NULL){
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << "\n";
    }

    void Insert(int data){
        Node* new_node = new Node(data);
        new_node->next = head;
        head = new_node;
    }

    void Reverse(Node* p){
        if (p->next == NULL){
            head = p;
            return;
        }
        Reverse(p->next);
        Node* q = p->next;
        q->next = p;
        p->next = NULL;
    }
};

int main(){
    LinkedList ll;
    ll.Insert(85);
    ll.Insert(90);
    ll.Insert(100);
    ll.Insert(110);
    ll.Print();
    ll.Reverse(ll.head);
    ll.Print();
}
