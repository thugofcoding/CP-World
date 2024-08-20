#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        string word;
        cin >> word;
        string formatedWord = word;

        if (word.size() > 10)
        {
            formatedWord = word[0] + to_string(word.size() - 2) + word[word.size() - 1];
        }

        cout << formatedWord << endl;
    }

    return 0;
}