// Codeforces: https://codeforces.com/contest/2195/D
// Problem: Absolute Cinema
// Submission: https://codeforces.com/contest/2195/submission/395032986
// Language: C++23 (GCC 14-64, msys2)
// Submitted: 2026-10-17T17:33:51.000Z
// Rating: 1300
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
    ll n; cin>>n;
    vector<ll> a(n+1);
    rep(i,1,n+1) cin>>a[i];
    vector<ll> b(n+1,0);

    rep(i,2,n) b[i] = (a[i-1]-2*a[i]+a[i+1])/2;

    ll s =0;
    rep(i,1,n) s+=b[i]*(i-1);

    b[n] = (a[1]-s)/(n-1);
    s =0;
    rep(i,2,n+1) s+=b[i]*(n-i);
    b[1] = (a[n]-s)/(n-1);
    
    rep(i,1,n+1)cout<<b[i]<<" ";cout<<endl;
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll t=1;
    cin>>t;
    while(t--) forrealtho();
    return 0;
}
