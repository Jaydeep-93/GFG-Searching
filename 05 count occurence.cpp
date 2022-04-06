#include <iostream>
using namespace std;

int first_occurence(int arr[], int size, int key);
int last_occurence(int arr[], int size, int key);

int main()
{
    int arr[] = {10, 20, 20, 20, 30, 30};
    int x = 20;
    int first = first_occurence(arr, 6, x);
    int last = last_occurence(arr, 6, x);
    cout << "Count is : " << (last - first + 1) << endl;
}

int first_occurence(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (arr[mid] == key)
        {
            if (arr[mid - 1] == key)
                end = mid - 1;
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

int last_occurence(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (arr[mid] == key)
        {
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