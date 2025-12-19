#include <iostream>
using namespace std;

//insert element at the back of the array

void insertAtBack(int arr[], int &size, int element);

int main(){
    int arr[10] = {1,2,3,4,5,6};
    int n  = 6; // Current number of elements in the array

    insertAtBack(arr, n, 7);
    insertAtBack(arr, n, 8);

    cout<<"Array after insertion at back: "<<endl;
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}

// Function to insert an element at the back of the array
//&size is passed by reference to update the size of the array

void insertAtBack(int arr[], int &size, int element){
    arr[size] = element;
    size++;
}