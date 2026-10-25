// Codeforces: https://codeforces.com/contest/1458/A
// Problem: Row GCD
// Submission: https://codeforces.com/contest/1458/submission/320407452
// Language: C++17 (GCC 7-32)
// Submitted: 2025-05-19T16:38:12.000Z
// Rating: 1600
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
    ll n,m; cin>>n>>m;
    vector<ll> a(n), b(m),c(m);
    rep(i,0,n) cin>>a[i];
    rep(i,0,m) cin>>b[i];


    if(n==1){
        rep(i,0,m){
            cout<<a[0]+b[i]<<" ";
        }cout<<endl;
        return;
    }
    sort(all(a),greater<ll>());

    ll d = a[0]-a[1];
    rep(i,2,n){
        d = __gcd(d,(a[0]-a[i]));
    }

    // cout<<d<<" "<<endl;
    rep(i,0,m){
        c[i] = __gcd(a[0]+b[i],d);
    }

    for(ll x:c){
        cout<<x<<" ";
    }cout<<endl;
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll t=1;
    // cin>>t;
    while(t--) forrealtho();
    return 0;
}
