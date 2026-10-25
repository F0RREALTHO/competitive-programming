// Codeforces: https://codeforces.com/contest/1256/A
// Problem: Payment Without Change
// Submission: https://codeforces.com/contest/1256/submission/280678298
// Language: C++17 (GCC 7-32)
// Submitted: 2024-09-11T03:37:45.000Z
// Rating: 1000
#include <iostream>
using namespace std;

int main() {
    int q;
    cin >> q;
    while (q--) {
        int a, b, n, S;
        cin >> a >> b >> n >> S;

        int max_n_coins = min(S / n, a) * n;
        int remainder = S - max_n_coins;

        if (remainder <= b) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}
