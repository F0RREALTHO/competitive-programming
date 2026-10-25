// Codeforces: https://codeforces.com/contest/1883/C
// Problem: Raspberries
// Submission: https://codeforces.com/contest/1883/submission/283803822
// Language: C++17 (GCC 7-32)
// Submitted: 2024-09-30T17:29:40.000Z
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

void forrealtho()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n);
    ll f = 0, ans = LLONG_MAX;

    rep(i, 0, n) {
        cin >> a[i];
        if (a[i] % 2 == 0) f++;
        if (a[i] % k == 0) {
            ans = 0;
        }
        ans = min(ans, k - (a[i] % k));
    }

    if (k == 4) {
        if (f >= 2) ans = 0;
        else if (f == 1) ans = min(ans, 1LL);
        else ans = min(ans, 2LL);
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
