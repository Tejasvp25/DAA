/**
 *  Name - Tejas Patil
 *  GR No - xxxxxxxx
 *  Roll No - xxxxxx
 *  Div - TY-C (C3 Batch) 
 *
 *  @author Tejas-PC
 **/

#include <iostream>
using namespace std;

int binarySearch(int arr[], int x, int n, int low, int high)
{
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] == x)
            return mid;
        else if (arr[mid] < x)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}

int main()
{
    int arr[] = {3, 5, 7, 9, 10, 56, 78, 97, 101};
    int x = 56;
    int n = sizeof(arr) / sizeof(arr[0]);

    int result = binarySearch(arr, x, n, 0, n - 1);
    if (result == -1)
        cout << "Element Not found:" << endl;
    else
        cout << "Element foound at location " << result << endl;
}