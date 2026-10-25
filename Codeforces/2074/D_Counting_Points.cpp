// Codeforces: https://codeforces.com/contest/2074/D
// Problem: Counting Points
// Submission: https://codeforces.com/contest/2074/submission/310092913
// Language: C++17 (GCC 7-32)
// Submitted: 2025-03-11T15:47:12.000Z
// Rating: 1400
#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;

#define ll long long
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
const ll INF = LLONG_MAX/4;


void forrealtho() {
    ll n,m; cin>>n>>m;
    vector<ll> x(n),r(n);
    rep(i,0,n) cin>>x[i];
    rep(i,0,n) cin>>r[i];
    unordered_map<ll,vector<pll>> mp;
    rep(i,0,n) {
        ll cx=x[i],cr=r[i];
        rep(dx,0,cr+1) {
            ll yMax=sqrtl(cr*cr-dx*dx);
            mp[cx+dx].push_back({-yMax,yMax});
            if(dx) mp[cx-dx].push_back({-yMax,yMax});
        }
    }
    ll ans=0;
    for(auto &[h,v]:mp) {
        if(v.empty()) continue;
        sort(all(v));
        ll cs=v[0].first,ce=v[0].second;
        rep(i,1,v.size()) {
            ll st=v[i].first,en=v[i].second;
            if(st>ce+1) ans+=ce-cs+1,cs=st,ce=en;
            else ce=max(ce,en);
        }
        ans+=ce-cs+1;
    }
    cout<<ans<<endl;
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll t=1; cin>>t;
    while(t--) forrealtho();
    return 0;
}
