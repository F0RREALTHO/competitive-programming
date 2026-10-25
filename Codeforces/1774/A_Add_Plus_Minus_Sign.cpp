// Codeforces: https://codeforces.com/contest/1774/A
// Problem: Add Plus Minus Sign
// Submission: https://codeforces.com/contest/1774/submission/278418295
// Language: C++17 (GCC 7-32)
// Submitted: 2024-08-27T16:43:07.000Z
// Rating: 800
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int l, n_ones = 0;
        cin >> l;

        string s;
        cin >> s;

        if (s[0] == '1') {
            n_ones = 1;
        }

        for (int i = 1; i < l; i++) {
            if (s[i] == '0') {
                cout << '+';
            } else {
                if (n_ones > 0) {
                    cout << '-';
                    n_ones--;
                } else {
                    cout << '+';
                    n_ones++;
                }
            }
        }
        cout << endl;
    }

    return 0;
}
