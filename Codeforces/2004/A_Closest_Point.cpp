// Codeforces: https://codeforces.com/contest/2004/A
// Problem: Closest Point
// Submission: https://codeforces.com/contest/2004/submission/279374146
// Language: C++17 (GCC 7-32)
// Submitted: 2024-09-02T18:14:42.000Z
// Rating: 800
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        if (n > 2) {
            cout << "NO" << endl;
        } else {
            if (abs(arr[0] - arr[1]) == 1) {
                cout << "NO" << endl;
            } else {
                cout << "YES" << endl;
            }
        }
    }
    
    return 0;
}
