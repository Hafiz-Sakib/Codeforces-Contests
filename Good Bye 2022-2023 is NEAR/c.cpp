#include <iostream>
#include <vector>

// Function to construct a permutation with minimum cost
std::vector<int> minimum_cost_permutation(int n, int k)
{
    // Initialize the permutation with increasing numbers from 1 to n
    std::vector<int> permutation(n);
    for (int i = 0; i < n; i++)
    {
        permutation[i] = i + 1;
    }

    // Reverse the subarray from index k - 1 to n - 1
    for (int i = 0; i < (n - k + 1) / 2; i++)
    {
        std::swap(permutation[k - 1 + i], permutation[n - 1 - i]);
    }

    return permutation;
}

int main()
{
    // Read the number of test cases
    int t;
    std::cin >> t;

    // Process each test case
    while (t--)
    {
        // Read the values of n and k
        int n, k;
        std::cin >> n >> k;

        // Construct the permutation with minimum cost
        std::vector<int> permutation = minimum_cost_permutation(n, k);

        // Print the permutation
        for (int i = 0; i < n; i++)
        {
            std::cout << permutation[i] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
