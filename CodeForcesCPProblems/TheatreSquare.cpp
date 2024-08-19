#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, a;
    cin >> n >> m >> a;

    long long int requiredN = (n / a) + (n % a == 0 ? 0 : 1);
    long long int requiredM = (m / a) + (m % a == 0 ? 0 : 1);

    cout << requiredM * requiredN << endl;

    return 0;
}