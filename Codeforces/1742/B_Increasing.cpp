// Codeforces: https://codeforces.com/contest/1742/B
// Problem: Increasing
// Submission: https://codeforces.com/contest/1742/submission/278647514
// Language: C++17 (GCC 7-32)
// Submitted: 2024-08-29T13:52:25.000Z
// Rating: 800
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int arr[n];

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        sort(arr, arr + n);

        bool sorted = true;

        for (int i = 0; i < n - 1; i++) {
            if (arr[i] == arr[i + 1]) {
                sorted = false;
                break; 
            }
        }

        if (sorted) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
