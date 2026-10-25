// Codeforces: https://codeforces.com/contest/710777/A
// Problem: Lucky Sum
// Submission: https://codeforces.com/contest/710777/submission/387112086
// Language: C++17 (GCC 7-32)
// Submitted: 2026-08-15T06:33:38.000Z
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int ans = 0;

    for (int i = 0; i < n; i++) {
        long long x;
        cin >> x;

        if (x % 3 == 0)
            ans += x;
    }

    cout << ans << '\n';

    return 0;
}
