// Codeforces: https://codeforces.com/contest/1750/B
// Problem: Maximum Substring
// Submission: https://codeforces.com/contest/1750/submission/278629872
// Language: C++17 (GCC 7-32)
// Submitted: 2024-08-29T11:48:20.000Z
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

        long long max_ones = 0, max_zeroes = 0, current_ones = 0, current_zeroes = 0;

        for (int i = 0; i < n; i++) {
            if (s[i] == '1') {
                current_ones++;
                current_zeroes = 0;
                max_ones = max(max_ones, current_ones);
            } else {
                current_zeroes++;
                current_ones = 0;
                max_zeroes = max(max_zeroes, current_zeroes);
            }
        }

        long long total_ones = count(s.begin(), s.end(), '1');
        long long total_zeroes = n - total_ones;

        long long cost_all_ones = max_ones * max_ones;
        long long cost_all_zeroes = max_zeroes * max_zeroes;
        long long cost_mix = total_ones * total_zeroes;

        long long max_cost = max({cost_all_ones, cost_all_zeroes, cost_mix});
        
        cout << max_cost << endl;
    }

    return 0;
}
