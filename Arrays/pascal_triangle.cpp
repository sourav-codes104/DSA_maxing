//Implement Pascal triangle
//Time Complexity: O(n²)
//Space Complexity: O(n²)


#include <bits/stdc++.h>
using namespace std;

int main()
{
    int row;
    cin >> row;

    vector<vector<int>> matrix;

    for (int i = 0; i < row; i++)
    {
        vector<int> ans;
        for (int j = 0; j <= i; j++)
        {
            if (j == 0 || i == j)
            {
                ans.push_back(1);
            }
            else
            {
                int sum = matrix[i - 1][j - 1] + matrix[i - 1][j];
                ans.push_back(sum);
            }
        }
        matrix.push_back(ans);
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<'\n';
        
    }
    

    return 0;
}