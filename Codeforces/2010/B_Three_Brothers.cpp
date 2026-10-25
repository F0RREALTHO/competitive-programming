// Codeforces: https://codeforces.com/contest/2010/B
// Problem: Three Brothers
// Submission: https://codeforces.com/contest/2010/submission/279351949
// Language: C++17 (GCC 7-32)
// Submitted: 2024-09-02T15:40:40.000Z
// Rating: 800
#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    
    int late_brother = 6 - (a + b);
    
    cout << late_brother << endl;
    return 0;
}
