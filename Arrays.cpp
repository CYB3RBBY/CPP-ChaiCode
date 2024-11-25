#include <bits/stdc++.h>
using namespace std;

int main (){
    // int marks[6] = { 100 , 100 , 98 , 99 , 98 , 99};
    // for ( int i = 0; i < 6; i++ ){
    //     cout << "marks of " << i+1 << " student are: " << marks[i] << endl;
    // }

    int arr2d[2][3] = {
        {1,2,3},
        {4,5,6}
    };
    for ( int i = 0; i < 2; i++){
        for (int j = 0; j < 3; j++){
            cout << "the value at " << i << ", " << j << " is " << arr2d[i][j] << endl;
        }
    }


    return 0;
}