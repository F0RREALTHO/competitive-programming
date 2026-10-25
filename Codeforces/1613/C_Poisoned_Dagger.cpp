// Codeforces: https://codeforces.com/contest/1613/C
// Problem: Poisoned Dagger
// Submission: https://codeforces.com/contest/1613/submission/395875818
// Language: C++23 (GCC 14-64, msys2)
// Submitted: 2026-10-24T14:03:17.000Z
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

bool ok(vector<ll>& diff, ll k, ll h){
    ll n = diff.size();
    ll s=0;
    rep(i,0,n){
        s+=min(diff[i],k);
    }
    return s>=h;
}

void forrealtho()
{
    ll n,h; cin>>n>>h;
    vector<ll> a(n);
    rep(i,0,n) cin>>a[i];
    vector<ll> diff(n,INFINITY);
    rep(i,1,n){
        diff[i-1] = a[i]-a[i-1]; 
    }

    ll l =0, r = h;
    ll ans = h;
    while(l<=r){
        ll m = (l+r)/2;
        if(ok(diff,m,h)){
            ans = min(ans,m);
            r=m-1;
        }else l=m+1;
    }
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
