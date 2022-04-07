#include <iostream>
using namespace std;

bool pair_sum(int arr[], int size, int sum);

int main()
{
    int arr[] = {2, 4, 8, 9, 11, 12, 20, 30};
    cout << (pair_sum(arr, 8, 17) ? "true" : "false") << endl;
}

bool pair_sum(int arr[], int size, int sum)
{
    int start = 0;
    int end = size - 1;

    while (start < end)
    {
        if (arr[start] + arr[end] == sum)
            return true;
        else if (arr[start] + arr[end] > sum)
            end--;
        else
            start++;
    }
    return false;
}