#include <iostream>
using namespace std;

//delete element from the back of the array
void deleteFromBack(int arr[], int &size);
//delete element from the front of the array
void deleteFromFront(int arr[], int &size);
//delete element from any position in the array
void deleteFromPosition(int arr[], int &size, int position);

int main(){
    int arr[10] = {1,2,3,4,5,6};
    int n  = 6; // Current number of elements in the array

    deleteFromBack(arr, n);
    cout<<"Array after deletion from back: "<<endl;
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    //size after deletion at back is 5
    cout<<endl<<"Array size after deletion at the back: "<<n;

    deleteFromFront(arr, n);
    cout<<endl<<"Array after deletion from front: "<<endl;
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    //size after deletion at front is 4
    cout<<endl<<"Size after deletion at front: "<<n;

    deleteFromPosition(arr, n, 2); // Delete element at index 2
    cout<<endl<<"Array after deletion from position 2: "<<endl;
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl<<"Size after deletion at anypoint: "<<n;
    return 0;
    
}
// Function to delete an element from the back of the array
void deleteFromBack(int arr[], int &size){
    if(size == 0){
        cout<<"Array is empty, cannot delete from back."<<endl;
        return;
    }
    size--;
}
//time complexity: O(1) constant time
// Function to delete an element from the front of the array
void deleteFromFront(int arr[], int &size){
    if(size == 0){
        cout<<"Array is empty, cannot delete from front."<<endl;
        return;
    }
    for(int i = 1; i < size; i++){
        arr[i-1] = arr[i];
    }
    size--;
}
//time complexity: O(n) linear time due to shifting elements
// Function to delete an element from any position in the array
void deleteFromPosition(int arr[], int &size, int position){
    if(size == 0){
        cout<<"Array is empty, cannot delete from position."<<endl;
        return;
    }
    if(position < 0 || position >= size){
        cout<<"Invalid position. Please provide a valid index."<<endl;
        return;
    }
    for(int i = position + 1; i < size; i++){
        arr[i-1] = arr[i];
    }
    size--;
}
//time complexity: O(n) linear time due to shifting elements
//position can be any valid index from 0 to size-1