// Codeforces: https://codeforces.com/contest/1878/C
// Problem: Vasilije in Cacak
// Submission: https://codeforces.com/contest/1878/submission/282615267
// Language: C++17 (GCC 7-32)
// Submitted: 2024-09-23T11:39:13.000Z
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

void forrealtho()
{
    ll n, k, x;
    cin >> n >> k >> x;
    
    ll min_sum = k * (k + 1) / 2;
    
    ll max_sum = k * (2 * n - k + 1) / 2;
    
    if (x >= min_sum && x <= max_sum) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll t = 1;
    cin >> t;
    while (t--) forrealtho();
    return 0;
}
