//Spiral Traversal
//TC: O(m*n)
//SC: O(1)


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

    int top = 0, left = 0;
    int bottom = rows - 1, right = cols - 1;

    while (top <= bottom && left <= right)
    {
        for (int j = left; j <= right; j++)
        {
            cout << matrix[top][j] << " ";
        }
        top++;

        for (int i = top; i <= bottom; i++)
        {
            cout << matrix[i][right] << " ";
        }
        right--;

        if (top <= bottom)
        {
            for (int j = right; j >= left; j--)
            {
                cout << matrix[bottom][j] << " ";
            }
            bottom--;
        }
        if (left <= right)
        {
            for (int i = bottom; i >= top; i--)
            {
                cout << matrix[i][left] << " ";
            }
            left++;
        }
    }

    return 0;
}