// Codeforces: https://codeforces.com/contest/2139/C
// Problem: Cake Assignment
// Submission: https://codeforces.com/contest/2139/submission/337607340
// Language: C++17 (GCC 7-32)
// Submitted: 2025-09-08T15:30:16.000Z
// Rating: 1100
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
    ll k,x; cin>>k>>x;
    ll st = 1LL<<k;
    ll tot = 1LL <<(k+1);
    if(x==st){
        cout<<0<<endl<<endl;
        return;
    }
    ll c =x;
    ll v = tot-x;
    vector<ll> ans;

    while(!(c==st && v==st)){
        if(ans.size()>120) break;
        if(v>=c){
            ans.push_back(1);
            ll nc = c*2;
            ll nv = v-c;
            c = nc;
            v = nv;
        }else{
            ans.push_back(2);
            ll nc = c-v;
            ll nv = v*2;
            c=nc;
            v=nv;
        }
    }
    reverse(all(ans));
    
    cout<<ans.size()<<endl;
    rep(i,0,ans.size()){
        cout<<ans[i]<<" ";
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
