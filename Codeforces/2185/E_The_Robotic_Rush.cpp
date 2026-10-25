// Codeforces: https://codeforces.com/contest/2185/E
// Problem: The Robotic Rush
// Submission: https://codeforces.com/contest/2185/submission/376422225
// Language: C++17 (GCC 7-32)
// Submitted: 2026-05-28T14:53:57.000Z
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

void forrealtho()
{
    ll n,m,k; cin>>n>>m>>k;

    vector<ll> a(n), b(m);
    rep(i,0,n) cin>>a[i];
    rep(i,0,m) cin>>b[i];
    sort(all(b));

    string s; cin>>s;

    vector<ll> dis(2*k+1,1e9);
    ll sft = 0;

    rep(i,0,k){
        sft+=(s[i]=='R'?1:-1);
        if(dis[sft+k]==1e9) dis[sft+k] = i+1;
    }

    vector<ll> ded(k+1,0);
    
    rep(i,0,n){
        ll ded_stp = 1e9;
        auto it = upper_bound(all(b),a[i]);

        if(it!=b.end() && *it-a[i]<=k){
            ll r = *it-a[i];
            ded_stp = min(ded_stp,dis[r+k]);
        }

        if(it!=b.begin() && a[i] -*(it-1)<=k){
            ll l = *(it-1)-a[i];
            ded_stp = min(ded_stp,dis[l+k]);
        }
        
        if(ded_stp<=k) ded[ded_stp]++;
    }

    ll ans = n;
    rep(i,1,k+1){
        ans-=ded[i];
        cout<<ans<<" ";
    }cout<<endl;
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll t=1;
    cin>>t;
    while(t--) forrealtho();
    return 0;
}
