//Rotate Image/Matrix by 90 degree
// TC : O(n²)
// SC : O(1)

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int rows, cols;
    cin >> rows >> cols;

    vector<vector<int>> matrix(rows, vector<int>(cols));
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> matrix[i][j];
        }
    }

    // Transpose of a matrix

    for (int i = 0; i < rows; i++)
    {
        for (int j = i + 1; j < cols; j++)
        {
            swap(matrix[i][j], matrix[j][i]);
        }
    }

    // Reverse of matrix
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0, k = cols - 1; j < k; j++, k--)
        {
            swap(matrix[i][j], matrix[i][k]);
        }
    }

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << matrix[i][j]<<" ";
        }
        cout<<'\n';
    }

    return 0;
}