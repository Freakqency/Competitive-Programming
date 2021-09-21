#include <iostream>

using namespace std;

class Node{
    public:
        int data;
        Node* next;
        Node(int data){
            this->data = data;
            next = NULL;
        }
};

class Queue{
    public:
        Node* front;
        Node* rear;
        Queue(){
            front = NULL;
            rear = NULL;
        }
        void Enque(int data){
            Node* new_node = new Node(data);
            if (front == NULL && rear == NULL){
                front = new_node;
                rear = new_node;
                return;
            }
            rear->next = new_node;
            rear = new_node;
        }
        void Deque(){
            Node* temp = front;
            if (front == NULL && rear == NULL){
                cout << "Queue empty";
                return;
            }
            front = front->next;
            delete(temp);
        }
        int top(){
            return front->data;
        }
        void Print(){
            Node* temp = front;
            while (temp != NULL){
                cout << temp->data << " ";
                temp = temp->next;
            }
        }
};

int main(){
    Queue que;
    que.Enque(10);
    que.Enque(20);
    que.Enque(30);
    que.Enque(40);
    que.Deque();
    que.Print();
    return 0;
}
