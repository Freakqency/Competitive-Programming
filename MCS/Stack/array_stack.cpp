#include<iostream>

using namespace std;

#define MAX_SIZE 101

class Stack{
    public:
    int A[MAX_SIZE];
    int top;
    Stack(){
        top = -1;
    }

    void push(int data){
        if (top == MAX_SIZE - 1){
            cout << "Stack Full" << "\n";
            return;
        }
        A[++top] = data;
    }

    void pop(){
        if (top == -1){
            cout << "Stack Empty" << "\n";
            return;
        }
        top--;
    }

    int Top(){
        return A[top];
    }

    bool isEmpty(){
        if (top == -1)
            return 1;
        return 0;
    }

    void Print(){
        for (int i = 0; i <= top; i++)
            cout << "Stack: " << A[i];
        cout << "\n";
    }
};

int main(){
     Stack st;
     st.push(10);
     st.Print();
     st.push(20);
     st.Print();
     st.push(30);
     st.Print();
     st.pop();
     st.Print();
     cout << "Top: " << st.Top();
     return 0;
}
