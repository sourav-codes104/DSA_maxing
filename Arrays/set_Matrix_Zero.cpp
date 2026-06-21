#include <bits/stdc++.h>
using namespace std;

void col(vector<vector<int>> &matrix, int j)
{
    for (int i = 0; i < matrix.size(); i++)
    {
        if (matrix[i][j] != 0)
        {
            matrix[i][j] = -1;
        }
    }
}
void row(vector<vector<int>> &matrix, int i)
{
    for (int j = 0; j < matrix[0].size(); j++)
    {
        if (matrix[i][j] != 0)
        {
            matrix[i][j] = -1;
        }
    }
}

void brute_force(vector<vector<int>> &matrix)
{
    int rows = matrix.size();
    int cols = matrix[0].size();
    // For every matrix except a matrix containing -1;
    // Time Complexity: O((mn)(m+n))
    // Space Complexity: O(1) (in-place)
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (matrix[i][j] == 0)
            {
                row(matrix, i);
                col(matrix, j);
            }
        }
    }

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (matrix[i][j] == -1)
            {
                matrix[i][j] = 0;
            }
        }
    }

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << '\n';
    }
}

// using vector generalised for every array
// TC = O(m*n)
// SC = O(m)+O(n)
void better(vector<vector<int>> &matrix)
{
    int m = matrix.size();
    int n = matrix[0].size();

    vector<int> row(m, 0);
    vector<int> col(n, 0);

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (matrix[i][j] == 0)
            {
                row[i] = 1;
                col[j] = 1;
            }
        }
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (row[i] == 1 || col[j] == 1)
            {
                matrix[i][j] = 0;
            }
        }
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << '\n';
    }
}

//Optimal Approach
//TC = O(m*n);
//SC = O(1);
void optimal(vector<vector<int>> &matrix)
{
    bool row_0 = false, col_0 = false;
    int m = matrix.size();
    int n = matrix[0].size();
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (matrix[i][j] == 0)
            {
                if (i == 0)
                    row_0 = true;
                if (j == 0)
                    col_0 = true;
                matrix[0][j] = 0;
                matrix[i][0] = 0;
            }
        }
    }

    for (int i = 1; i < m; i++)
    {
        for (int j = 1; j < n; j++)
        {
            if (matrix[0][j] == 0 || matrix[i][0] == 0)
            {
                matrix[i][j] = 0;
            }
        }
    }
    if (row_0)
    {
        for (int i = 0; i < n; i++)
        {
            matrix[0][i] = 0;
        }
    }
    if (col_0)
    {
        for (int j = 0; j < m; j++)
        {
            matrix[j][0] = 0;
        }
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << '\n';
    }
}

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

    // brute_force(matrix);
    // better(matrix);

    optimal(matrix);

    return 0;
}