#include <iostream>
using namespace std ;

int last_occurence(int arr[], int size, int key);

int main() {
    // int arr[] = { 1, 10, 10, 10, 20, 20, 40 };
    // int index = last_occurence(arr, 7, 20);
    int arr[] = {5, 5, 5};
    int index = last_occurence(arr, 3, 5);
    cout << "First Index is : " << index << endl; 
}

int last_occurence(int arr[], int size, int key) {
    int start = 0;
    int end = size - 1; 
    while (start <= end) {
        int mid = (start + end) / 2; 
        if (arr[mid] == key) {
            if (mid + 1 < size && arr[mid + 1] == key)
                start = mid + 1; 
            else
                return mid; 
        }
        else if (arr[mid] > key)
            end = mid - 1; 
        else
            start = mid + 1; 
    }
    return -1; 
}

// key points 
// if we found key element 
// check if next index is valid and its value is same as mid 
// if yes then move start to that position 