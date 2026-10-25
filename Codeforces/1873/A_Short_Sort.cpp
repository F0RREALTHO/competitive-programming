// Codeforces: https://codeforces.com/contest/1873/A
// Problem: Short Sort
// Submission: https://codeforces.com/contest/1873/submission/277753309
// Language: C++17 (GCC 7-32)
// Submitted: 2024-08-23T08:43:04.000Z
// Rating: 800
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;

    for(int i = 0; i < t; i++)
{
    string s;
    cin >> s;
    if (s == "abc" || s == "acb" || s == "bac" || s == "cba") {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}
    return 0;
}
