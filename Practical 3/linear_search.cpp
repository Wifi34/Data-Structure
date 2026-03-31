#include <iostream>
using namespace std;

// Recursive Linear Search Function
int linearSearch(int arr[], int size, int key, int index)
{
    // Base case: element not found
    if (index == size)
        return -1;

    // If element is found
    if (arr[index] == key)
        return index;

    // Recursive call
    return linearSearch(arr, size, key, index + 1);
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int size = 5;
    int key;

    cout << "Enter element to search: ";
    cin >> key;

    int result = linearSearch(arr, size, key, 0);

    if (result != -1)
        cout << "Element found at index " << result;
    else
        cout << "Element not found";

    return 0;
}
