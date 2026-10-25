// Codeforces: https://codeforces.com/contest/1765/M
// Problem: Minimum LCM
// Submission: https://codeforces.com/contest/1765/submission/278966149
// Language: C++17 (GCC 7-32)
// Submitted: 2024-08-31T16:46:12.000Z
// Rating: 1000
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        int a = 1;

        for (int i = 2; i * i<= n; i++)
        {
            if (n%i == 0)
            {
                a = n/i;
                break;
            }
            
        }
        

        cout << a << " " << n-a << endl;
    }

}
