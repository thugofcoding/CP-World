#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 5;
    int m = 5;
    int oneRow = 0;
    int oneCol = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            int matrixValue;
            cin >> matrixValue;
            if (matrixValue)
            {
                oneRow = i;
                oneCol = j;
            }
        }
    }

    cout << abs(oneRow - 2) + abs(oneCol - 2) << endl;
    
    return 0;
}