// Codeforces: https://codeforces.com/contest/2123/C
// Problem: Prefix Min and Suffix Max
// Submission: https://codeforces.com/contest/2123/submission/326889760
// Language: C++17 (GCC 7-32)
// Submitted: 2025-07-01T15:20:18.000Z
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
    ll n; cin>>n;
    vector<ll> a(n);
    rep(i,0,n) cin>>a[i];
    
    if(n==1){
        cout<<1<<endl;
        return;
    }

    vector<ll> pmin(n), smax(n);
    pmin[0] = a[0];
    smax[n-1] = a[n-1];
    rep(i,1,n){
        pmin[i] = min(pmin[i-1], a[i]);
        smax[n-1-i] = max(smax[n-i], a[n-1-i]);
    }

    string ans = "";
    rep(i,0,n){
        ll l = (i==0)?LLONG_MAX:pmin[i-1];
        ll r = (i==n-1)?LLONG_MIN:smax[i+1];
        ans+=(a[i]< l ||a[i]>r)?"1":"0";
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
