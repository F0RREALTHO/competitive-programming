// Codeforces: https://codeforces.com/contest/2008/A
// Problem: Sakurako's Exam
// Submission: https://codeforces.com/contest/2008/submission/279101322
// Language: C++17 (GCC 7-32)
// Submitted: 2024-09-01T14:55:14.000Z
// Rating: 800
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t; 

    while (t--) {
        int a, b;
        cin >> a >> b; 

        if ((a + 2 * b) % 2 == 0 && (a >= b % 2)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}
