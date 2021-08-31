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

void insertionSort(int array[], int size)
{

    int key, j;
    for (int i = 1; i < size; i++)
    {
        key = array[i];
        j = i;
        while (j > 0 && array[j - 1] > key)
        {
            array[j] = array[j - 1];
            j--;
        }
        array[j] = key;
    }
}

void displayArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[] = {3, 56, 78, 9, 10, 5, 7, 97, 101};
    int x = 56;
    int n = sizeof(arr) / sizeof(arr[0]);
    insertionSort(arr, n);
    displayArray(arr, n);
}