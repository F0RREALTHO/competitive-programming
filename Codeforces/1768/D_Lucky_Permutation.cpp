// Codeforces: https://codeforces.com/contest/1768/D
// Problem: Lucky Permutation
// Submission: https://codeforces.com/contest/1768/submission/375721329
// Language: C++17 (GCC 7-32)
// Submitted: 2026-05-23T06:54:05.000Z
// Rating: 1800
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
    vector<ll> p(n+1);
    rep(i,1,n+1) cin>>p[i];

    int ans=0, cyc = 0;
    vector<ll> vis(n+1), cycle(n+1);
    rep(i,1,n+1){
        if(vis[i]) continue;
        cyc++;
        ll cur=i, sz=0;
        while(!vis[cur]){
            vis[cur]=1;
            cycle[cur] = cyc;
            cur = p[cur];
            sz++;
        }
        ans +=sz-1;
    }

    bool ok = 0;
    rep(i,1,n){
        if(cycle[i]==cycle[i+1]){
            ok = true;
        }
    }
    if(ok){
        ans-=1;
    }else ans+=1;

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

// 1 2 3 4
// 1 3 2 4

// 1 2 3 4
// 2 4 3 1

// (1,2,4) -> 2 (3) ->0
// (1,2) (2,3) (3,4)

// 1 2 3 4
// 3 4 1 2
// (1,3)-> 1 (2,4) -> 1 ; 2
// (1,2) (2,3) (3,4) 2 + 1

// 2-1 = 1


// 1 2 3 4

// 2->3
// 3->2 
