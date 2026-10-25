// Codeforces: https://codeforces.com/contest/1765/B
// Problem: Broken Keyboard
// Submission: https://codeforces.com/contest/1765/submission/278494011
// Language: C++17 (GCC 7-32)
// Submitted: 2024-08-28T10:09:28.000Z
// Rating: 800
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        string s;
        cin >> s;

        if ((n - 2) % 3 == 0) {
            cout << "NO" << endl;
            continue;
        }

        bool valid = true;
        for (int i = 1; i < n; i += 3) {
            if (i + 1 < n && s[i] != s[i + 1]) {
                valid = false;
                break;
            }
        }

        if (valid) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
