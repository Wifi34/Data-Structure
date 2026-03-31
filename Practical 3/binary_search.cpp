#include <iostream>
using namespace std;

// Recursive Binary Search Function
int binarySearch(int arr[], int low, int high, int key)
{
    // Base case: element not found
    if (low > high)
        return -1;

    int mid = (low + high) / 2;

    // If element is found
    if (arr[mid] == key)
        return mid;

    // If key is smaller, search left side
    if (key < arr[mid])
        return binarySearch(arr, low, mid - 1, key);

    // If key is larger, search right side
    return binarySearch(arr, mid + 1, high, key);
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int size = 5;
    int key;

    cout << "Enter element to search: ";
    cin >> key;

    int result = binarySearch(arr, 0, size - 1, key);

    if (result != -1)
        cout << "Element found at index " << result;
    else
        cout << "Element not found";

    return 0;
}
