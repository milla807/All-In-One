#include <iostream>
using namespace std;

//insert element at the back of the array

void insertAtBack(int arr[], int &size, int element);
void insertAtFront(int arr[], int &size, int element);
void insertAtPosition(int arr[], int &size, int element, int position);

int main(){
    int arr[10] = {1,2,3,4,5,6};
    int n  = 6; // Current number of elements in the array

    insertAtBack(arr, n, 7);
    insertAtBack(arr, n, 8);

    cout<<"Array after insertion at back: "<<endl;
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    //size after insertion at back is 8
    cout<<endl<<"Array size after insertion at the back: "<<n;

    insertAtFront(arr, n, 0);
    cout<<endl<<"Array after insertion at front: "<<endl;
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    //size after insertion at front is 9
    cout<<endl<<"Size after insertion at front: "<<n;

    insertAtPosition(arr, n, 99, 4); // Insert 99 at index 4
    cout<<endl<<"Array after insertion at position 4: "<<endl;
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl<<"Size after insertion at anypoint: "<<n;
    return 0;
    
}

// Function to insert an element at the back of the array
//&size is passed by reference to update the size of the array

void insertAtBack(int arr[], int &size, int element){
    arr[size] = element;
    size++;
}
//time complexity: O(1) constant time

//array insertion at the front
// insertion to the front requires shifting all elements to the right

void insertAtFront(int arr[], int &size, int element){
    for(int i = size-1; i >= 0; i--){
        arr[i+1] = arr[i];
    }
    arr[0] = element;
    size++;
}
//time complexity: O(n) linear time due to shifting of elements

//Now insertion at any point
void insertAtPosition(int arr[], int &size, int element, int position){
    for(int i = size-1; i >= position; i--){
        arr[i+1] = arr[i];
    }
    arr[position] = element;
    size++;
}