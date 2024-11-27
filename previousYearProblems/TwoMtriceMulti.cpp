#include <bits/stdc++.h>
using namespace std;

void multiplyMatrices(int n , int matrix1[][10], int matrix2[][10], int result[][10]){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            result[i][j] = 0;
            for(int k = 0; k < n; k++){
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
}
int main(){
    int n;
    cout << "Enter the size of matrices (n):";
    cin >> n;
    int matrix1[n][10], matrix2[n][10], result[n][10];
    
    cout << "Enter elements of first matrix:\n";
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> matrix1[i][j];
        }
    }
    
    cout << "Enter elements of second matrix:\n";
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> matrix2[i][j];
        }
    }

    multiplyMatrices(n, matrix1, matrix2, result);
    
    cout << "Resultant Matrix:\n";
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}