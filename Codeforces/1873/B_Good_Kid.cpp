// Codeforces: https://codeforces.com/contest/1873/B
// Problem: Good Kid
// Submission: https://codeforces.com/contest/1873/submission/277750812
// Language: C++17 (GCC 7-32)
// Submitted: 2024-08-23T08:19:02.000Z
// Rating: 800
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;

        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int minIndex = 0;
        for (int i = 1; i < n; i++)
        {
            if (a[i] < a[minIndex]) {
                minIndex = i;
            }
        }
        a[minIndex] += 1;

        int pro = 1;
        for (int i = 0; i < n; i++)
        {
            pro *= a[i];
        }

        cout << pro << endl;
    }

    return 0;
}
