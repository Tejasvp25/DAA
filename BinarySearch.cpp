/**
 *  Name - Tejas Patil
 *  GR No - 22020163
 *  Roll No - 323080
 *  Div - TY-C (C3 Batch) 
 *
 *  @author Tejas-PC
 * 
 *  https://github.com/Tejasvp25/DAA/blob/master/BinarySearch.cpp
 **/

#include <iostream>
using namespace std;

int binarySearch(int arr[], int x, int low, int high)
{
    int mid;
    if (low > high)
        return -1;
    else
    {
        mid = (low + high) / 2;
        if (x == arr[mid])
            return mid;
        else if (x > arr[mid])
            return binarySearch(arr, x, mid + 1, high);
        else
            return binarySearch(arr, x, low, mid - 1);
    }
}

int main()
{
    int size, key;
    cout << "Enter Number of Elements in Array : ";
    cin >> size;
    int arr[size];

    cout << "Enter Elements of Array : ";
    for (int i = 0; i < size; i++)
        cin >> arr[i];

    cout << "Enter Key to Find : ";
    cin >> key;

    int result = binarySearch(arr, key, 0, size - 1);
    if (result == -1)
        cout << "Element Not found:" << endl;
    else
        cout << "Element foound at location " << result << endl;
}

/**
 * 
 * Output:
 * 
 * Enter Number of Elements in Array : 6
 * Enter Elements of Array : 1 7 8 11 33 55
 * Enter Key to Find : 7
 * Element foound at location 1
*/