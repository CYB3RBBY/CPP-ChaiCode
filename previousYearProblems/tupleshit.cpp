#include <bits/stdc++.h>
using namespace std;

// This program takes a 6*5 sparse matrix and outputs 3-tuple representation of the matrix

typedef vector<tuple<int, int, int>> SparseMatrix;

SparseMatrix convertToTuple(int rows, int cols, int matrix[][10])
{
    SparseMatrix sparse;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {

            if (matrix[i][j] != 0)
            {
                sparse.push_back(make_tuple(i, j, matrix[i][j]));
            }
        }
    }

    return sparse;
}

int main()
{
    int rows = 6, cols = 5;
    int matrix[6][10] = {
        {5, 0, 0, 0, 0},
        {0, 8, 0, 0, 0},
        {0, 0, 1, 0, 0},
        {0, 0, 0, 7, 0},
        {0, 0, 0, 0, 8},
        {0, 6, 0, 0, 0}};

    SparseMatrix sparse = convertToTuple(rows, cols, matrix);

    cout << "3-tuple representation:\nRow Column Value\n";
    for (auto [row, col, val] : sparse)
    {
        cout << row << " " << col << " " << val << endl;
    }
    return 0;
}
