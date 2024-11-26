#include <iostream>
using namespace std;

// Function to display the array
void display(int arr[], int size) {
    cout << "Array elements: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Function to delete an element from a specific index
void indDeletion(int arr[], int &size, int index) {
    if (index < 0 || index >= size) {
        cout << "Deletion failed: Invalid index" << endl;
        return;
    }
    
    // Shift elements to the left from the deletion index
    for (int i = index; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }

    // Reduce the size of the array
    size--;
}

int main() {
    int arr[100] = {10, 20, 30, 40, 50};
    int size = 5; // Current number of elements in the array
    int index = 2; // Index to delete (0-based)

    cout << "Before Deletion:" << endl;
    display(arr, size);

    // Perform deletion
    indDeletion(arr, size, index);

    cout << "After Deletion:" << endl;
    display(arr, size);

    return 0;
}
