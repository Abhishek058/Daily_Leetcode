#include <bits/stdc++.h>
using namespace std;

class solution
{
public:
    void transpose(int matrix[4][4], int n)
    {
        int mat2[n][n];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                mat2[i][j] = matrix[i][j];
            }
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                matrix[i][j] = mat2[j][i];
            }
        }
    }
};

int main()
{
    solution s;
    int matrix[4][4] = {{1, 1, 1, 1},
                        {2, 2, 2, 2},
                        {3, 3, 3, 3},
                        {4, 4, 4, 4}};

    s.transpose(matrix, 4);

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}