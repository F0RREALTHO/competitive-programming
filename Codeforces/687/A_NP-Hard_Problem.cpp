// Codeforces: https://codeforces.com/contest/687/A
// Problem: NP-Hard Problem
// Submission: https://codeforces.com/contest/687/submission/389753798
// Language: C++17 (GCC 7-32)
// Submitted: 2026-09-07T13:37:36.000Z
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
    ll n,m; cin>>n>>m;
    vector<vector<ll>> adj(n+1);
    rep(i,0,m){
        ll u,v; cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    vector<ll> color(n+1,-1);
    ll cnt = 0;
    rep(i,1,n+1){
        if(color[i]!=-1) continue;
        queue<ll> q;
        q.push(i);
        color[i]=0;
        while(!q.empty()){
            ll cur= q.front();
            q.pop();
            bool clr = color[cur];
            if(clr) cnt++;
            for(auto x:adj[cur]){
                if(color[x]==-1){
                    color[x]=1-color[cur];
                    q.push(x);
                }
                else if(color[x]==color[cur]){
                    cout<<-1<<endl;
                    return;
                }
            }
        }
    }
    cout<<cnt<<endl;
    rep(i,1,n+1){
        if(color[i]) cout<<i<<" ";
    }cout<<endl;
    cout<<n-cnt<<endl;
    rep(i,1,n+1){
        if(!color[i]) cout<<i<<" ";
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
