// Codeforces: https://codeforces.com/contest/2051/C
// Problem: Preparing for the Exam
// Submission: https://codeforces.com/contest/2051/submission/298059074
// Language: C++17 (GCC 7-32)
// Submitted: 2024-12-23T13:33:27.000Z
// Rating: 1000
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

ll binexp(ll a, ll b, ll MOD = 1e9 + 7)
{
    ll ans=1;
    while(b>0)
    {
        if(b&1)
        ans=(ans*a)%MOD;
        a=(a*a)%MOD;
        b>>=1;
    }
    return ans;
}

void forrealtho() {
    ll n, m, k;
    cin >> n >> m >> k;

    vector<ll> a(m); 
    rep(i, 0, m) cin >> a[i];

    vector<bool> known(n + 1, false);
    rep(i, 0, k) {
        ll x;
        cin >> x;
        known[x] = true;
    }

    ll unknown_count = 0;
    rep(i, 1, n + 1) {
        if (!known[i]) unknown_count++;
    }

    string ans;
    ans.reserve(m);
    rep(i, 0, m) {
        if (known[a[i]]) {
            ans += (unknown_count == 0 ? '1' : '0');
        } else {
            ans += (unknown_count == 1 ? '1' : '0');
        }
    }

    cout << ans << endl;
}


int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll t=1;
    cin>>t;
    while(t--) forrealtho();
    return 0;
}
