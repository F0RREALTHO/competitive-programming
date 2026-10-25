// Codeforces: https://codeforces.com/contest/2033/B
// Problem: Sakurako and Water
// Submission: https://codeforces.com/contest/2033/submission/287729129
// Language: C++17 (GCC 7-32)
// Submitted: 2024-10-24T15:15:41.000Z
// Rating: 900
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
    ll n;
    cin >> n;
    
    ll a[n][n];
    rep(i, 0, n) {
        rep(j, 0, n) {
            cin >> a[i][j];
        }
    }
    
    ll ans = 0;
    
    rep(i, 0, n) {
        rep(j, 0, n) {
             ll len = min(n-i, n-j);            
            ll mn = 0;
            rep(k, 0, len) {
                mn = min(mn, a[i+k][j+k]);
            }            
            if(mn < 0) {
                ans += abs(mn);
                rep(k, 0, len) {
                    a[i+k][j+k] += abs(mn);
                }
            }
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
