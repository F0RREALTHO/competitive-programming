// Codeforces: https://codeforces.com/contest/2267/C
// Problem: GCD Treasury
// Submission: https://codeforces.com/contest/2267/submission/394476759
// Language: C++23 (GCC 14-64, msys2)
// Submitted: 2026-10-14T06:27:31.000Z
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

void forrealtho()
{
    ll n,x;
    cin>>n>>x;
    vector<ll> a(n);
    rep(i,0,n) cin>>a[i];

    if(x==1){cout<<0<<endl;return;}

    ll ans=0;

    for(ll p=2;p*p<=x;p++){
        if(x%p==0){
            ll sum=0;
            for(ll v:a){
                if(v%p==0) sum+=v;
            }
            ans = max(ans,sum);
            while(x%p==0) x/=p;
        }
    }
    if(x>1){
        ll sum = 0;
        for(ll v:a){
            if(v%x==0) sum+=v;
        }
        ans = max(ans,sum);
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
