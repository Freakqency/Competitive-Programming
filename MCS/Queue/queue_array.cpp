#include <iostream>
#define MAX 5
using namespace std;

class Queue{
    public:
        int front, rear;
        int queue[MAX];
        Queue(){
            front = -1;
            rear = -1;
        }
        int top(){
            return queue[front];
        }
        bool IsEmpty(){
            if (front == -1 && rear == -1)
                return true;
            return false;
        }
        bool IsFull(){
            if ((rear + 1) % MAX == front)
                return true;
            return false;
        }
        void Enqueue(int data){
            if (IsFull()){
                cout << "Queue Full";
                return ;
            }
            else if (IsEmpty()){
                front = 0;
                rear = 0;
                queue[rear] = data;
                return;
            }
           rear = (rear + 1) % MAX;
           queue[rear] = data;
        }
        void Dequeue(){
            if (IsEmpty()){
                cout << "Queue Empty";
                return ;
            }
            else if (front == rear){
                front = -1;
                rear = -1;
                return;
            }
            front = (front + 1) % MAX;
        }
        void Print(){
            for (int i = 0; i < MAX; i++)
                cout << "Queue: " << queue[i] << " ";
        }
};

int main(){
    Queue que;
    que.Enqueue(10);
    que.Print();
    que.Enqueue(20);
    que.Print();
    que.Enqueue(30);
    que.Print();
    que.Dequeue();
    que.Enqueue(40);
    que.Enqueue(50);
    que.Enqueue(60);
    que.Print();
    return 0;
}
