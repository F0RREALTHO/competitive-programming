// Codeforces: https://codeforces.com/contest/862/B
// Problem: Mahmoud and Ehab and the bipartiteness
// Submission: https://codeforces.com/contest/862/submission/358308841
// Language: C++17 (GCC 7-32)
// Submitted: 2026-01-17T15:24:34.000Z
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

void dfs(int node, int parent, bool color, vector<ll>& cnt, vector<vector<ll>>& adj){
    cnt[color]++;
    for(ll nxt:adj[node]){
        if(nxt==parent) continue;
        dfs(nxt,node,!color,cnt,adj);
    }
}

void forrealtho()
{
    ll n; cin>>n;
    vector<vector<ll>> adj(n+1);
    rep(i,0,n-1){
        ll u,v; cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    vector<ll> cnt(2,0);
    dfs(1,-1,0,cnt,adj);

    cout<<cnt[0]*cnt[1] -(n-1)<<endl;
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll t=1;
    // cin>>t;
    while(t--) forrealtho();
    return 0;
}
