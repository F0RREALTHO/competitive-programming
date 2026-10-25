// Codeforces: https://codeforces.com/contest/2008/C
// Problem: Longest Good Array
// Submission: https://codeforces.com/contest/2008/submission/279118693
// Language: C++17 (GCC 7-32)
// Submitted: 2024-09-01T15:05:14.000Z
// Rating: 800
#include <bits/stdc++.h>
using namespace std;

int findMaxLength(int l, int r) {
    long long max_sum = r - l;
    int k = 0;
    
    while ((k + 1LL) * (k + 2LL) / 2 <= max_sum) {
        k++;
    }
    
    return k + 1; 
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int l, r;
        cin >> l >> r;
        cout << findMaxLength(l, r) << endl;
    }
    
    return 0;
}
