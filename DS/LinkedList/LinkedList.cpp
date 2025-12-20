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

// function to search an element in the linked list
void searchElement(int value){
    node*temp = head;
    while (temp != NULL)
    {
        if(temp->data == value){
            cout<<"Element found in the list."<<endl;
            return;
        }
        temp = temp->next;
    }
    
} 

// function to delete an element from the linked list
void deleteElement(int value){
    if(head == NULL){
        cout<<"List is empty, cannot delete."<<endl;
        return;
    }
    if(head->data == value){
        node* temp = head;
        head = head->next;
        delete temp;
        return;
    }
    node* current = head;
    node* previous = NULL;
    while(current != NULL && current->data != value){
        previous = current;
        current = current->next;
    }
    if(current == NULL){
        cout<<"Element not found in the list."<<endl;
        return;
    }
    previous->next = current->next;
    delete current;
}

int main(){
    insertAtEnd(10);
    insertAtEnd(20);
    insertAtEnd(30);
    insertAtEnd(40);
    insertAtEnd(50);

    searchElement(20); // Output: Element found in the list.
    
    deleteElement(40);
    
    cout<<"Linked List: ";
    displayList(); // Output: 10 20 30
    return 0;
}
