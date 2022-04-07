#include <iostream>
using namespace std;

int sqrt(int num);

int main()
{
    int num;
    cout << "Enter any number :  ";
    cin >> num;
    int square_root = sqrt(num);
    cout << "Square root of " << num << " is : " << square_root << endl;
}

int sqrt(int num)
{
    int start = 1;
    int end = num - 1;
    int mid = (start + end) / 2;
    int ans = 1;

    while (start <= end)
    {
        mid = (start + end) / 2;
        if (mid * mid == num)
            return mid;
        else if (mid * mid > num)
            end = mid - 1;
        else
        {
            ans = mid;
            start = mid + 1;
        }
    }
    return ans;
}
