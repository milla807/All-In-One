#include <iostream>
using namespace std;
//linked list implementation

struct node
{
    int data;
    node*next;
};

node* head = NULL;
// Function to insert a new node at the end of the linked list
void insertAtEnd(int value){
    node* newNode = new node();
    newNode->data = value;
    newNode->next = NULL;
    if(head == NULL){
        head = newNode;
        return;
    }
    node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = newNode;
}
// Function to display the linked list
void displayList(){
    node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
int main(){
    insertAtEnd(10);
    insertAtEnd(20);
    insertAtEnd(30);
    cout<<"Linked List: ";
    displayList(); // Output: 10 20 30
    return 0;
}
