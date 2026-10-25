// Codeforces: https://codeforces.com/contest/2106/C
// Problem: Cherry Bomb
// Submission: https://codeforces.com/contest/2106/submission/317001424
// Language: C++17 (GCC 7-32)
// Submitted: 2025-04-24T14:52:46.000Z
// Rating: 1000
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
    ll n,k; cin>>n>>k;
    vector<ll> a(n), b(n);
    rep(i,0,n) cin>>a[i];
    rep(i,0,n) cin>>b[i];

    ll x =-1;
    bool kx = false;
    rep(i,0,n){
        if(b[i]!=-1){
            ll cnd = a[i]+b[i];
            if(!kx){
                x = cnd;
                kx = true;
            }else if(x!=cnd){
                cout<<0<<endl;
                return;
            }      
        }
    }
    if(kx){
        rep(i,0,n){
            if(b[i]==-1){
                ll bi = x-a[i];
                if(bi<0 || bi>k){
                    cout<<0<<endl;
                    return;
                }
            }
        }
        cout<<1<<endl;
    }else{
        ll l = 0, r = 2*k;
        rep(i,0,n){
            l = max(l,a[i]);
            r = min(r,a[i]+k);
        }
        cout<<max(0LL,r-l+1)<<endl;
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
