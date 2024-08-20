#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int k;
    cin >> n >> k;

    vector<int> arr;
    int participantToSelectIntoNextRound = 0;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        arr.emplace_back(a);
        if (i < k && a > 0)
        {
            participantToSelectIntoNextRound++;
        }
    }

    int i = k - 1;
    while (i < n - 1 && arr[i] == arr[i + 1] && arr[i] > 0)
    {
        participantToSelectIntoNextRound++;
        i++;
    }

    cout << participantToSelectIntoNextRound << endl;

    return 0;
}