#include <iostream>
using namespace std;

int binary_search_rec(int arr[], int size, int key, int start, int end);

int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int index = binary_search_rec(arr, 10, 55, 0, 9);
    cout << "Found index is : " << index << endl;
}

int binary_search_rec(int arr[], int size, int key, int start, int end)
{
    if (start > end)
        return -1; 
    int mid = (start + end) / 2;
    if (arr[mid] == key)
        return mid;
    else
    {
        if (arr[mid] > key)
            return binary_search_rec(arr, size, key, start, mid - 1);
        else
            return binary_search_rec(arr, size, key, mid + 1, end);
    }
    return -1;
}