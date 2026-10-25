// Codeforces: https://codeforces.com/contest/2019/B
// Problem: All Pairs Segments
// Submission: https://codeforces.com/contest/2019/submission/283218788
// Language: C++17 (GCC 7-32)
// Submitted: 2024-09-27T14:40:52.000Z
// Rating: 1200
#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;

#define ll long long
#define ld long double
#define pll pair<ll,ll>
#define lcm(a,b) (a*(b/__gcd(a,b)))
#define max3(a,b,c) max(a,max(b,c))
#define min3(a,b,c) min(a,min(b,c))
#define all(a) (a).begin(),(a).end()
#define F first
#define S second
#define rep(i,j,k) for(ll i=j;i<k;i++)
#define rrep(i,j,k) for(ll i=j;i>=k;i--)
#define oset tree <ll, null_type,less<ll>, rb_tree_tag,tree_order_statistics_node_update>
#define omset tree <pll, null_type,less<pll>, rb_tree_tag,tree_order_statistics_node_update>
#define endl "\n" 
const ll MOD= 1e9+7;
const ll N=1e5+7;

ll binexp(ll a, ll b, ll MOD = 1e9 + 7) {
    ll ans=1;
    while(b>0) {
        if(b&1) ans=(ans*a)%MOD;
        a=(a*a)%MOD;
        b>>=1;
    }
    return ans;
}

string join(const vector<string>& v, const string& d) {
    string res;
    rep(i, 0, v.size()) {
        res += v[i];
        if (i < v.size() - 1) {
            res += d;
        }
    }
    return res;
}

string ptc(ll n, ll q, vector<ll>& x, vector<ll>& qs) {
    unordered_map<ll, ll> freq;

    rep(c, 1, n + 1) {
        ll kp = (c - 1) * (n - c + 1) + (n - c);
        freq[kp]++;

        if (c < n) {
            ll delta = x[c] - x[c - 1] - 1;
            if (delta > 0) {
                ll k_bw = c * (n - c);
                freq[k_bw] += delta;
            }
        }
    }

    vector<string> ans;
    for (auto k : qs) {
        ans.push_back(to_string(freq[k]));
    }

    return join(ans, " ");
}

void forrealtho() {
    ll n, q;
    cin >> n >> q;
    vector<ll> x(n);
    rep(i, 0, n) cin >> x[i];

    vector<ll> qs(q);
    rep(i, 0, q) cin >> qs[i];

    string result = ptc(n, q, x, qs);
    cout << result << endl;
}

int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    ll t = 1;
    cin >> t;
    while(t--) forrealtho();
    return 0;
}
