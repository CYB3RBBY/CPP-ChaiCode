#include <bits/stdc++.h>
using namespace std;

void display(int arr[], int n) {
    // Traversal 
   for (int i = 0; i < n; i++) {
       printf("%d\n", arr[i]);
   }
}

void indInsertion(int arr[] ,int size ,int element ,int capacity, int index){
     if(size>=capacity){
        return;
     }
}

int main() {
    int arr[100] = {1, 2, 6, 78};
    int size = 4;
    int element = 45;
    int index = 3;
    display(arr, size);
    indInsertion(arr , size , element , 100, index);
    return 0;
}
