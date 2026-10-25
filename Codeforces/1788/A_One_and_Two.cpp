// Codeforces: https://codeforces.com/contest/1788/A
// Problem: One and Two
// Submission: https://codeforces.com/contest/1788/submission/277953421
// Language: C++17 (GCC 7-32)
// Submitted: 2024-08-24T18:05:25.000Z
// Rating: 800
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;
        vector<int> a(n);

        int total_twos = 0;
        for (int j = 0; j < n; j++) {
            cin >> a[j];
            if (a[j] == 2) {
                total_twos++;
            }
        }

        int current_twos = 0;
        bool found = false;
        for (int k = 0; k < n - 1; k++) {
            if (a[k] == 2) {
                current_twos++;
            }

            if (current_twos == total_twos - current_twos) {
                cout << k + 1 << endl; 
                found = true;
                break;
            }
        }

        if (!found) {
            cout << -1 << endl;
        }
    }
    return 0;
}
