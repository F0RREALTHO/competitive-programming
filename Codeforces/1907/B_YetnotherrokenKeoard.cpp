// Codeforces: https://codeforces.com/contest/1907/B
// Problem: YetnotherrokenKeoard
// Submission: https://codeforces.com/contest/1907/submission/281851660
// Language: C++17 (GCC 7-32)
// Submitted: 2024-09-19T12:11:04.000Z
// Rating: 1000
#include <bits/stdc++.h>
using namespace std;

#define sz(a) ((int)(a).size())
#define pb push_back
#define nl '\n'

void process_string() {
    vector<pair<int, char>> up, lo;
    string S; cin >> S;
    int nxt = 0;
    
    for (char a : S) {
        if (a == 'B') {
            if (sz(up)) {
                up.pop_back();
            }
        } else if (a == 'b') {
            if (sz(lo)) {
                lo.pop_back();
            }
        } else if (a >= 'a' && a <= 'z') {
            lo.pb({nxt, a}); 
            nxt++;
        } else {
            up.pb({nxt, a}); 
            nxt++;
        }
    }
    
    for (const auto& a : lo) {
        up.pb(a);
    }
    
    sort(up.begin(), up.end());
    
    for (const auto& a : up) {
        cout << a.second;
    }
    
    cout << nl;
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t; cin >> t;
    while(t--) process_string();
    return 0;
}
