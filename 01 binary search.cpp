#include <iostream>
using namespace std;

int binary_search(int arr[], int size, int key);

int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int index = binary_search(arr, 10, 100);
    cout << "Found index is : " << index << endl; 
}

int binary_search(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;

    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (arr[mid] == key)
            return mid;
        else if (arr[mid] > key)
            end = mid - 1;
        else
            start = mid + 1;
    }
    return -1;
}