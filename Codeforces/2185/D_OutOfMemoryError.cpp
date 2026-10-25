// Codeforces: https://codeforces.com/contest/2185/D
// Problem: OutOfMemoryError
// Submission: https://codeforces.com/contest/2185/submission/359113240
// Language: C++17 (GCC 7-32)
// Submitted: 2026-01-21T18:37:00.000Z
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
    ll n,m,h; cin>>n>>m>>h;
    vector<ll> a(n);
    rep(i,0,n) cin>>a[i];

    vector<ll> org = a;
    vector<ll> lst_upd(n,-1);

 
    ll last = -1;
    rep(i,0,m){
        ll b,c; cin>>b>>c;
        b--;
        if(lst_upd[b]<last){
            a[b] = org[b];
        }
        a[b]+=c;

        if(a[b]>h){
            last = i;
        }else{
            lst_upd[b]=i;
        }
    }

    rep(i,0,n){
        if(lst_upd[i]<last){
            a[i]=org[i];
        }
        cout<<a[i]<<" ";
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
