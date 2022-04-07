#include <iostream>
using namespace std;

int search(int arr[], int size, int key);

int main()
{
    int arr[] = {30, 40, 50, 60, 70, 80, 90, 100, 10, 20};
    int index = search(arr, 10, 10);
    cout << index << endl;
}

int search(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;

    while (start <= end)
    {
        int mid = (start + end) / 2;

        if (arr[mid] == key)
            return mid;

        else if (arr[start] < arr[mid])
        {
            if (arr[start] < key && arr[mid] > key)
                end = mid - 1;
            else
                start = mid + 1;
        }
        else
        {
            if (arr[mid] < key && arr[end] > key)
                start = mid + 1;
            else
                end = mid - 1;
        }
    }
    return -1;
}