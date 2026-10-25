// Codeforces: https://codeforces.com/contest/2224/B
// Problem: Zhily and Mex and Max
// Submission: https://codeforces.com/contest/2224/submission/394740044
// Language: C++23 (GCC 14-64, msys2)
// Submitted: 2026-10-15T19:02:47.000Z
// Rating: 1200
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

ll mex(vector<ll>& a){
    ll n =a.size();
    vector<bool> hm(n+1,false);
    for(ll x:a){
        if (x >= 0 && x <= n)
            hm[x]=true;
    }
    rep(i,0,n+1){
        if(!hm[i]) return i;
    }
    return n+1;
}

void forrealtho()
{
    ll n; cin>>n;
    vector<ll> a(n);
    rep(i,0,n) cin>>a[i];
    sort(all(a));

    vector<ll> b,c;
    unordered_map<ll,ll> mp;
    rep(i,0,n){
        if(!mp[a[i]]) {
            b.push_back(a[i]);
            mp[a[i]]++;
        }else{
            c.push_back(a[i]);
        }
    }
    a.clear();
    ll t=0;
    if (!b.empty()) rotate(b.begin(), b.end() - 1, b.end());
    for (ll x:b) a.push_back(x);
    for (ll x:c) a.push_back(x);
    ll ans = 0;
    // swap(a[0],a[n-1]);

    // rep(i,0,n){
    //     cout<<a[i]<<" ";
    // }cout<<endl;
    // rep(i,0,b.size()){
    //     cout<<b[i]<<" ";
    // }cout<<endl;
    // rep(i,0,c.size()){
    //     cout<<c[i]<<" ";
    // }cout<<endl;

    ll cmaxi = LLONG_MIN;
    ll cmex = 0;
    vector<bool> hm(n+2,false);

    rep(i,0,n){
        cmaxi=max(cmaxi,a[i]);
        if(a[i]>=0 && a[i]<=n) hm[a[i]]=true;
        while(hm[cmex]) cmex++;
        ans+=cmaxi+cmex;
    }
    cout<<ans<<endl;
}

// 1 1 1 1 0
// 

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll t=1;
    cin>>t;
    while(t--) forrealtho();
    return 0;
}
