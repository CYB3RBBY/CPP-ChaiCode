#include <bits/stdc++.h>
using namespace std;

int linearSearch(int arr[], int size, int element){
    for (int i = 0; i < size; i++){
        if(arr[i]==element){
            return i;
        }
    }
    return -1;
}

int binarySearch(int arr[], int size , int element){
    int low , mid , high ;
    low = 0;
    high = size-1;
    while(low <=high){
        
    mid = (low + high) / 2;
    if(arr[mid] == element){
        return mid;
    } 
    if(arr[mid] < element){
        low = mid + 1;
    }
    else{
        high = mid - 1;
    }

    }
    // search ends
    return -1;
}
int main(){
    // Unsorted array for linear search 
    // int arr[] = {1,3,5,56,4,3,23,5,4,54634,56,34};
    // int size = sizeof(arr)/sizeof(arr[0]);

    // Sorted array for binary search
    int arr[] = {1,3,5,56,64,73,123,225,444};
    int size = sizeof(arr)/sizeof(arr[0]);
    int element = 56; 
    int searchIndex = binarySearch(arr, size , element);
    cout << "The element " << element << " was fount at index " << searchIndex << endl;
    return 0;
}