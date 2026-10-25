// Codeforces: https://codeforces.com/contest/2093/E
// Problem: Min Max MEX
// Submission: https://codeforces.com/contest/2093/submission/314605022
// Language: C++17 (GCC 7-32)
// Submitted: 2025-04-08T15:45:41.000Z
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

ll segm(vector<ll> &a,ll x){
    ll n = a.size();
    ll seg = 0;
    vector<bool> p(x,false);
    ll mis = x;
    
    rep(i,0,n){
        if(a[i]<x && !p[a[i]]){
            p[a[i]]= true;
            mis--;
        }
        if(mis==0){
            seg++;
            fill(all(p),false);
            mis = x;
        }
    }
    return seg;
}

void forrealtho()
{
    ll n,k; cin>>n>>k;
    vector<ll> a(n);
    rep(i,0,n) cin>>a[i];

    if(k==1){
        set<ll> s;
        for(ll x:a) s.insert(x);
        ll mex = 0;
        while(s.count(mex)) mex++;
        cout<<mex<<endl;
        return;
    }
    if(k==n){
        bool z = true;
        rep(i,0,n){
            if(a[i]){
                z=false;
                break;
            }
        }
        cout<<(z?1:0)<<endl;
        return;
    }
    ll l =0 , r= n+2;
    while(l<r){
        ll m = l+(r-l)/2;
        ll seg = segm(a,m);
        if(seg>=k){
            l=m+1;
        }else r= m;
    }
    cout<<l-1<<endl;
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll t=1;
    cin>>t;
    while(t--) forrealtho();
    return 0;
}
