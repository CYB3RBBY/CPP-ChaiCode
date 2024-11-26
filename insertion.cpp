#include <bits/stdc++.h>
using namespace std;

void display(int arr[], int n) {
    // Traversal 
    for (int i = 0; i < n; i++) {
        printf("%d\n", arr[i]);
    }
}

// Insertion
void indInsertion(int arr[], int size, int element, int capacity, int index) {
    if (size >= capacity) {
        cout << "Insertion failed: Array is at full capacity" << endl;
        return;
    }
    for (int i = size - 1; i >= index; i--) {
        arr[i + 1] = arr[i];
    }
    arr[index] = element;
}

int main() {
    int arr[100] = {7, 8, 12, 27, 88};
    int size = 5;
    int element = 45;
    int index = 3;

    indInsertion(arr, size, element, 100, index);
    size += 1;
    display(arr, size);

    return 0;
}
