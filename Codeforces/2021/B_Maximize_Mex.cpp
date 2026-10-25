// Codeforces: https://codeforces.com/contest/2021/B
// Problem: Maximize Mex
// Submission: https://codeforces.com/contest/2021/submission/284586443
// Language: C++17 (GCC 7-32)
// Submitted: 2024-10-06T07:32:52.000Z
// Rating: 1200
#include<bits/stdc++.h>
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
const ll N = 200200;

ll binexp(ll a, ll b, ll MOD = 1e9 + 7) {
    ll ans = 1;
    while (b > 0) {
        if (b & 1) ans = (ans * a) % MOD;
        a = (a * a) % MOD;
        b >>= 1;
    }
    return ans;
}

void forrealtho() {
    ll n, x;
    cin >> n >> x;

    vector<int> cc(n + 2, 0), cnt(n + 2, 0), a(n);
    rep(i, 0, n) {
        cin >> a[i];
        if (a[i] <= n) cc[a[i]]++;
    }

    sort(all(a));

    if (x > n) {
        int flg = 0, i = 0;
        while (i < n) {
            if (a[i] != flg) break;
            while (i < n && a[i] == flg) i++;
            flg++;
        }
        cout << flg << endl;
        return;
    }

    rep(i, 0, n + 1) {
        cnt[i % x] += cc[i];
        if (cnt[i % x] == 0) {
            cout << i << endl;
            return;
        }
        cnt[i % x]--;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t = 1;
    cin >> t;
    while (t--) forrealtho();
    return 0;
}
