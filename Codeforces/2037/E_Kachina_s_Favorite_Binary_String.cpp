// Codeforces: https://codeforces.com/contest/2037/E
// Problem: Kachina's Favorite Binary String
// Submission: https://codeforces.com/contest/2037/submission/292094093
// Language: C++17 (GCC 7-32)
// Submitted: 2024-11-17T19:05:03.000Z
// Rating: 1600
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;

#define ll long long
#define ld long double
#define pll pair<ll, ll>
#define lcm(a, b) (a * (b / __gcd(a, b)))
#define max3(a, b, c) max(a, max(b, c))
#define min3(a, b, c) min(a, min(b, c))
#define all(a) (a).begin(), (a).end()
#define F first
#define S second
#define rep(i, j, k) for (ll i = j; i < k; i++)
#define rrep(i, j, k) for (ll i = j; i >= k; i--)
#define oset tree<ll, null_type, less<ll>, rb_tree_tag, tree_order_statistics_node_update>
#define omset tree<pll, null_type, less<pll>, rb_tree_tag, tree_order_statistics_node_update>
#define endl "\n"
const ll MOD = 1e9 + 7;
const ll N = 1e5 + 7;

ll binexp(ll a, ll b, ll MOD = 1e9 + 7) {
    ll ans = 1;
    while (b > 0) {
        if (b & 1)
            ans = (ans * a) % MOD;
        a = (a * a) % MOD;
        b >>= 1;
    }
    return ans;
}

void forrealtho() {
    ll n;
    cin >> n;
    string s(n + 1, '0');
    bool first = true;
    ll last = n;
    ll prev_val = n + 1;
    
    rrep(i, n - 1, 1) {
        cout << "? " << i << " " << n << endl;
        ll val;
        cout.flush();
        cin >> val;
        if (val != prev_val && val > 0) {
            prev_val = val;
            if (first) {
                first = false;
                s[i] = '0';
                rep(j, i + 1, n + 1) {
                    if (j <= i + val) {
                        s[j] = '1';
                    } else {
                        s[j] = '0';
                    }
                }
            } else {
                s[i] = '0';
            }
        } else {
            if (!first) {
                s[i] = '1';
            }
        }
    }
    
    if (first) {
        cout << "! IMPOSSIBLE" << endl;
        cout.flush();
    } else {
        cout << "! ";
        rep(i, 1, n + 1) {
            cout << s[i];
        }
        cout << endl;
        cout.flush();   
    }
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
