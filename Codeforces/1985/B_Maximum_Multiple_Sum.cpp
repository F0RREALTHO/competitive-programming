// Codeforces: https://codeforces.com/contest/1985/B
// Problem: Maximum Multiple Sum
// Submission: https://codeforces.com/contest/1985/submission/279459829
// Language: C++17 (GCC 7-32)
// Submitted: 2024-09-03T11:13:48.000Z
// Rating: 800
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int max_sum = INT_MIN; 
        int best_i = 0; 

        for (int i = 2; i <= n; i++) { 
            int k = n / i;
            int current_sum = 0; 

            for (int j = 1; j <= k; j++) { 
                current_sum += j * i; 
            }

            if (current_sum > max_sum) { 
                max_sum = current_sum; 
                best_i = i; 
            }
        }

        cout << best_i << endl; 
    }

    return 0;
}
