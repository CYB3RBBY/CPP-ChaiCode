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
int main(){
    int arr[] = {1,3,5,56,4,3,23,5,4,54634,56,34};
    int size = sizeof(arr)/sizeof(arr[0]);
    int element = 4; 
    int searchIndex = linearSearch(arr, size , element);
    cout << "The element " << element << " was fount at index " << searchIndex << endl;
    return 0;
}