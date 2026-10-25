// Codeforces: https://codeforces.com/contest/1916/B
// Problem: Two Divisors
// Submission: https://codeforces.com/contest/1916/submission/279792381
// Language: C++17 (GCC 7-32)
// Submitted: 2024-09-04T11:25:49.000Z
// Rating: 1000
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long a, b;
        cin >> a >> b;

        if (b%a != 0)
        {
            cout << lcm(a,b)<<'\n';
        }

        else
        {
            cout<< b * (b/a)<<'\n';
        }
        
        
    }

    return 0;
}
