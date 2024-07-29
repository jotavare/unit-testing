#include <iostream>
#include <vector>

using namespace std;

/**
 * @brief Checks if there's a pair of numbers in the vector `A` that adds up to `x`.
 *
 * This function goes through every possible pair of numbers in the vector `A`. It checks if any two numbers add up to `x`.
 * If it finds such a pair, it returns `true`. If no pairs add up to `x` after checking all possibilities, it returns `false`.
 *
 * @param A A vector of integers to look for pairs in.
 * @param x The target sum we're checking for.
 * @return `true` if we find a pair that sums to `x`, `false` otherwise.
 */

bool hasPair(vector<int> A, int x)
{
    int size = A.size();
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (A[i] + A[j] == x)
                return true;
        }
    }
    return false;
}

// int main()
// {
//     vector<int> A = {1, 4, 45, 45, 5, 67, 77, 8, 2, -3, 321, 542, -66, 100, 200};

//     if (hasPair(A, 10))
//         cout << "Soma encontrada!\n";
//     else
//         cout << "Soma não encontrada!\n";

//     return 0;
// }
