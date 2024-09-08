#include <iostream>

using namespace std;

// Function to perform linear search
int linearSearch(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i;  // Return the index where the target is found
        }
    }
    return -1;  // Return -1 if the target is not found
}

int main() {
    int size;

    // Get the size of the array from the user
    cout << "Enter the number of elements in the array: ";
    cin >> size;

    // Create an array of the given size
    int* arr = new int[size];

    // Get array elements from the user
    cout << "Enter " << size << " elements:" << endl;
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    int target;
    // Get the target value to search for
    cout << "Enter the value to search for: ";
    cin >> target;

    // Perform linear search
    int result = linearSearch(arr, size, target);

    // Output the result
    if (result != -1) {
        cout << "Element found at index: " << result << endl;
    } else {
        cout << "Element not found in the array." << endl;
    }

    // Clean up dynamically allocated memory
    delete[] arr;

    return 0;
}
