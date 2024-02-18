#include <iostream>
#include <climits>
using namespace std;

// Function to print the optimal parenthesization of matrix multiplication
void printParenthesis(int i, int j, int n, int *bracket, char &name)
{
    if (i == j)
    {
        cout << name++;
        return;
    }

    cout << "(";

    printParenthesis(i, *((bracket + i * n) + j), n, bracket, name);

    printParenthesis(*((bracket + i * n) + j) + 1, j, n, bracket, name);

    cout << ")";
}

// Function to find the most efficient way to multiply matrices
int matrixChainOrder(int p[], int n)
{
    int m[n][n];
    int bracket[n][n];

    for (int i = 1; i < n; i++)
        m[i][i] = 0;

    for (int L = 2; L < n; L++)
    {
        for (int i = 1; i < n - L + 1; i++)
        {
            int j = i + L - 1;
            m[i][j] = INT_MAX;
            for (int k = i; k <= j - 1; k++)
            {
                int q = m[i][k] + m[k + 1][j] + p[i - 1] * p[k] * p[j];
                if (q < m[i][j])
                {
                    m[i][j] = q;
                    bracket[i][j] = k;
                }
            }
        }
    }

    char name = 'A';
    cout << "Optimal Parenthesization is: ";
    printParenthesis(1, n - 1, n, (int *)bracket, name);
    cout << endl;

    return m[1][n - 1]; // Return the minimum number of multiplications
}

int main()
{
    int arr[] = {3, 4, 8, 4, 9};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Minimum number of multiplications: " << matrixChainOrder(arr, n) << endl;

    return 0;
}
