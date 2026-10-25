// Codeforces: https://codeforces.com/contest/2053/C
// Problem: Bewitching Stargazer
// Submission: https://codeforces.com/contest/2053/submission/298869695
// Language: C++17 (GCC 7-32)
// Submitted: 2024-12-28T16:22:35.000Z
// Rating: 1500
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

pair<ll,ll> hehe(ll l, ll r, ll k) {
    if(r-l+1<k) return {0,0};
    if(r-l+1==1) return{l,1};
    
    ll m = l+(r-l)/2;
    if((r-l+1) % 2) {
        auto res = hehe(l,m-1,k);
        ll luck = m+2*res.F+m*res.S;
        ll segs= 2*res.S + 1;
        return {luck, segs};
    } 
    else {
        auto res = hehe(l,m,k);
        ll luck =2*res.F+m*res.S;
        ll segs=2*res.S;
        return {luck, segs};
    }
}

void forrealtho() {
    ll n,k;
    cin>>n>>k;
    auto res=hehe(1,n,k);
    cout<<res.F<<endl;
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll t=1;
    cin>>t;
    while(t--) forrealtho();
    return 0;
}


