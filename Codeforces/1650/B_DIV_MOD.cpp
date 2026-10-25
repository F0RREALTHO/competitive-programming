// Codeforces: https://codeforces.com/contest/1650/B
// Problem: DIV + MOD
// Submission: https://codeforces.com/contest/1650/submission/279922244
// Language: C++17 (GCC 7-32)
// Submitted: 2024-09-05T10:23:54.000Z
// Rating: 900
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long l, r, a;
        cin >> l >> r >> a;

        long long max_value = (r / a) + (r % a);

        long long candidate = (r / a) * a - 1;
        if (candidate >= l) {
            max_value = max(max_value, (candidate / a) + (candidate % a));
        }

        max_value = max(max_value, (l / a) + (l % a));

        cout << max_value << endl;
    }

    return 0;
}
