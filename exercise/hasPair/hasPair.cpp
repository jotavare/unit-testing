#include <iostream>
#include <vector>

using namespace std;

bool hasPair(vector<int> A, int x)
{
    int n = A.size();
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (A[i] + A[j] == x)
                return true;
        }
    }
    return false;
}

int main()
{
    vector<int> A = {1, 4, 45, 45, 5, 67, 77, 8, 2, -3, 321, 542, -66, 100, 200};

    if (hasPair(A, 10))
        cout << "Soma encontrada!";
    else
        cout << "Soma não encontrada!";

    return 0;
}