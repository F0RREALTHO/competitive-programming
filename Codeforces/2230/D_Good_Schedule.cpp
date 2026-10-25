// Codeforces: https://codeforces.com/contest/2230/D
// Problem: Good Schedule
// Submission: https://codeforces.com/contest/2230/submission/375140085
// Language: C++17 (GCC 7-32)
// Submitted: 2026-05-18T16:12:33.000Z
// Rating: 1700
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

ll fd(ll v, vector<ll>& p) {
    if (v == p[v]) return v;
    return p[v] = fd(p[v], p);
}

void forrealtho()
{
    ll n; cin>>n;
    vector<ll> a(n), b(n);
    rep(i,0,n) cin>>a[i];
    rep(i,0,n) cin>>b[i];

    vector<ll> lc(n+2,0);
    vector<ll> lim(n+2,n);
    vector<ll> p(n+2);
    rep(i,0,n+2) p[i]= i;

    rep(i,0,n){
        lc[0]= i+1;
        if(a[i]==b[i]){
            ll v = a[i];
            lc[v] = lc[v-1];
        }else{
            ll x1 = a[i]-1;
            ll x2 =b[i]-1;

            ll l1 =lc[x1+1] +1;
            ll r1 = lc[x1];
            if(l1<=r1){
                ll cur = fd(l1,p);
                while(cur<=r1){
                    lim[cur]=i;
                    p[cur]= cur + 1;
                    cur =fd(cur,p);
                }
            }

            ll l2 = lc[x2+1] +1;
            ll r2 = lc[x2];
            if(l2<=r2){
                ll cur=fd(l2,p);
                while(cur<=r2){
                    lim[cur] = i;
                    p[cur] = cur+1;
                    cur = fd(cur,p);
                }
            }
        }
    }

    ll ans=0;
    rep(L,1,n+1){
        if(lim[L]>=L){
            ans+=(lim[L]-L+1);
        }
    }
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
