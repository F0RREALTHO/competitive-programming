// Codeforces: https://codeforces.com/contest/2193/D
// Problem: Monster Game
// Submission: https://codeforces.com/contest/2193/submission/394841039
// Language: C++23 (GCC 14-64, msys2)
// Submitted: 2026-10-16T16:07:44.000Z
// Rating: 1100
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

ll ok(ll m, vector<ll>& a, vector<ll>& pre){
    ll n = a.size();
    ll cnt = n-m;
    ll i = upper_bound(all(pre), cnt) - pre.begin() - 1;
    return a[m]*i;
}

void forrealtho()
{
    ll n; cin>>n;
    vector<ll> a(n), b(n);
    rep(i,0,n) cin>>a[i];
    sort(all(a));
    rep(i,0,n) cin>>b[i];

    vector<ll> pre(n+1,0);
    rep(i,0,n){
        pre[i+1] = pre[i]+b[i];
    }

    // ll l =0, r=n-1;
    ll ans = 0;
    rep(m,0,n){
        if(m>0 && a[m]==a[m-1]) continue;
        ans = max(ans,ok(m,a,pre));
    }
    // while(l<r){
    //     ll m = l+(r-l)/2;
    //     while(m>0 && a[m]==a[m-1]) m--;
    //     ll cur = ok(m,a,b);
    //     if(cur>=ans){
    //         ans = cur;
    //         l= m+1; 
    //     }else{
    //         r=m-1;
    //     }
    // }
    cout<<ans<<endl;
    
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll t=1;
    cin>>t;
    while(t--) forrealtho();
    return 0;
}
