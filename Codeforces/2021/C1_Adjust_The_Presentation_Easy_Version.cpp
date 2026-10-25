// Codeforces: https://codeforces.com/contest/2021/C1
// Problem: Adjust The Presentation (Easy Version)
// Submission: https://codeforces.com/contest/2021/submission/284600784
// Language: C++17 (GCC 7-32)
// Submitted: 2024-10-06T08:04:55.000Z
// Rating: 1300
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--) {
        int n, m, q;
        cin >> n >> m >> q;

        int a[n];
        vector<int> b;

        for (int i = 0; i < n; i++)
            cin >> a[i];

        for (int i = 0; i < m; i++) {
            int x;
            cin >> x;
            if (b.empty() || (b.size() > 0 && b.back() != x)) {
                b.push_back(x);
            }
        }

        m = b.size();
        int ans = 1;
        int idx = 0;

        for (int i = 0; i < m; i++) {
            if (b[i] == a[idx]) {
                idx++;
            } else {
                bool found = false;
                for (int j = 0; j < idx; j++) {
                    if (a[j] == b[i]) {
                        found = true;
                        break;
                    }
                }
                if (!found) {
                    ans = 0;
                    break;
                }
            }
        }

        if (ans) {
            cout << "YA" << endl;
        } else {
            cout << "TIDAK" << endl;
        }
    }

    return 0;
}

