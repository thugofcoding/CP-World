#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int problemCanSolve = 0;
    while (n--)
    {
        int a, b, c;
        cin >> a >> b >> c;

        if ((a && b) || (b && c) || (c & a))
            problemCanSolve++;
    }

    cout << problemCanSolve << endl;

    return 0;
}