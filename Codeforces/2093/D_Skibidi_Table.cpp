// Codeforces: https://codeforces.com/contest/2093/D
// Problem: Skibidi Table
// Submission: https://codeforces.com/contest/2093/submission/314585458
// Language: C++17 (GCC 7-32)
// Submitted: 2025-04-08T15:27:16.000Z
// Rating: 1400
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

ll f(ll n,ll x, ll y){
    if(n==1){
        if(x==1 && y==1)return 1;
        if(x==2 && y==2)return 2;
        if(x==2 && y==1)return 3;
        return 4;
    }
    ll l = 1 << (n-1);
    ll b = l*l;
    if(x <= l && y <= l) return f(n-1, x, y);
    if(x > l && y > l) return b + f(n-1, x-l, y-l);
    if(x > l && y <= l) return 2*b + f(n-1, x-l,y);
    return 3*b + f(n-1, x, y-l);
}

pair<ll,ll> g(ll n, ll d){
    if(n==1){
        if(d==1)return {1,1};
        if(d==2)return {2,2};
        if(d==3)return {2,1};
        return {1,2};
    }
    ll l = 1LL<<(n-1);
    ll b = l*l;
    if(d<=b) return g(n-1,d);
    if(d<=2*b){
        auto[x,y] = g(n-1,d-b);
        return {x+l,y+l};
    }if(d<=3*b){
        auto[x,y] = g(n-1,d-2*b);
        return {x+l,y};
    }
    auto [x,y] =g(n-1,d-3*b);
    return  {x,y+l};
}

void forrealtho()
{
    ll n,q; cin>>n>>q;
    while(q--){
        string s; cin>>s;
        if(s=="->"){
            ll x,y; cin>>x>>y;
            cout<<f(n,x,y)<<endl;
        }else{
            ll d; cin>>d;
            auto p = g(n,d);
            cout<<p.F<<" "<<p.S<<endl;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll t=1;
    cin>>t;
    while(t--) forrealtho();
    return 0;
}
