#include <iostream>
#include <vector>
#include <tuple>
using namespace std;

// This program takes a 6*5 sparse matrix and outputs its 3-tuple representation.

typedef vector<tuple<int, int, int>> SparseMatrix;

SparseMatrix convertToTuple(int rows, int cols, int matrix[][5])
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
    int matrix[6][5] = {
        {5, 0, 0, 0, 0},
        {0, 8, 0, 0, 0},
        {0, 0, 1, 0, 0},
        {0, 0, 0, 7, 0},
        {0, 0, 0, 0, 8},
        {0, 6, 0, 0, 0}};

    SparseMatrix sparse = convertToTuple(rows, cols, matrix);

    cout << "3-tuple representation:\nRow Column Value\n";
    for (const auto &element : sparse)
    {
        int row = get<0>(element);
        int col = get<1>(element);
        int val = get<2>(element);
        cout << row << " " << col << " " << val << endl;
    }

    return 0;
}
