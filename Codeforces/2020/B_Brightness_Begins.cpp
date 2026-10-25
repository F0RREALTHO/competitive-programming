// Codeforces: https://codeforces.com/contest/2020/B
// Problem: Brightness Begins
// Submission: https://codeforces.com/contest/2020/submission/283603292
// Language: C++17 (GCC 7-32)
// Submitted: 2024-09-29T16:18:55.000Z
// Rating: 1200
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"

ll fn(ll k) {
    ll left = k, right = 2 * k; 
    while (left < right) {
        ll mid = (left + right) / 2;
        ll sq = sqrt(mid);
        if (mid - sq < k) {
            left = mid + 1;
        } else {
            right = mid;
        }
    }
    return left;
}


void forrealtho() {
    ll k;
    cin >> k;
    cout << fn(k) << endl; 
}

int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    ll t;
    cin >> t;
    while (t--) 
        forrealtho();
    
    return 0;
}
