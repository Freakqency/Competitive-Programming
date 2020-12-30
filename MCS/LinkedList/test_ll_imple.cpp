#include <iostream>

using namespace std;

int main(){
    struct node{
        int data;
        node* link;
    };

    node* A;
    A = NULL;

    node* temp = new node();
    temp->data = 2;
    temp->link = NULL;
    
    A = temp;

}
