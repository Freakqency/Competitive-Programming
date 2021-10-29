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

    temp = new node();
    temp->data = 4;
    temp->link = NULL;

    node* temp1 = A;

    while(temp1->link != NULL){
        temp1 = temp1->link;
    }

    temp1->link = temp;


    temp = new node();
    temp->data = 6;
    temp->link = NULL;

    temp1 = A;
    while (temp1->link != NULL){
        temp1 = temp1->link;
    }

    temp1->link = temp;
}
