#include <iostream>
using namespace std;

void insertAtFront(int arr[], int size, int element);

int main(){
    int arr[8] = {1,2,3,4,5,6};

    int n  = sizeof(arr) / sizeof(arr[0]);
// Correct way to get the length of a static array in C++int n = sizeof(arr) / sizeof(arr[0]);
    cout<<"Length of the array is: "<<n<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" "<<endl;
    }
// Delete array from the given array from front 
cout<<"After deleting the first element from the array: "<<endl;
    int arrr[] = {1,2,3,4,5,6};
    int len = sizeof(arrr) / sizeof(arrr[0]);
    for(int i = 0; i < len-1; i++){
        arrr[i] = arrr[i+1];
        cout<<arrr[i]<<" "<<endl;
    }
// Delete array from the given array from back
cout<<"Array from back";
    for (int i = len-1; i > 0; i--)
    {
        arrr[i] = arrr[i-1];
        cout<<arrr[i]<<" "<<endl;
    }
    insertAtFront(arr, n, 15);
    cout<<"Array after insertion at front: "<<endl;
    for(int i = 0; i <= n; i++){
        cout<<arr[i]<<" "<<endl;
    }
    

    return 0;
}
//insert ion and deletion in array is costly as it requires shifting of elements.

//insertion at front requires shifting all elements to the right.

//deletion at front requires shifting all elements to the left.

//insertion at back is easy if there is space available.

//deletion at back is easy as it does not require shifting of elements.


//insert array at front

void insertAtFront(int arr[], int size, int element){
    for(int i = size-1; i >= 0; i--){
        arr[i+1] = arr[i];
    }
    arr[0] = element;
}