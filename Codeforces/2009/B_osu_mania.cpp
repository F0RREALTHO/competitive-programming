// Codeforces: https://codeforces.com/contest/2009/B
// Problem: osu!mania
// Submission: https://codeforces.com/contest/2009/submission/279517882
// Language: C++17 (GCC 7-32)
// Submitted: 2024-09-03T14:45:49.000Z
// Rating: 800
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> results; 

        for (int i = 0; i < n; i++) {
            string row;
            cin >> row;

            for (int j = 0; j < row.size(); j++) {
                if (row[j] == '#') {
                    results.push_back(j + 1); 
                    break;
                }
            }
        }

        
        for (int i = results.size() - 1; i >= 0; i--) {
            cout << results[i] << " ";
        }
        cout << endl; 
    }

    return 0;
}
