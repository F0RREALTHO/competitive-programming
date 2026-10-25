// Codeforces: https://codeforces.com/contest/2144/A
// Problem: Cut the Array
// Submission: https://codeforces.com/contest/2144/submission/338746416
// Language: C++17 (GCC 7-32)
// Submitted: 2025-09-15T14:49:03.000Z
// Rating: 800
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
    vector<ll> a(n);
    rep(i,0,n) cin>>a[i];

    ll tot = accumulate(all(a),0LL);
    if(tot%3!=0){
        cout<<0<<" "<<0<<endl;
        return;
    }
    vector<ll> pre(n+1,0);
    rep(i,0,n){
        pre[i+1]+=pre[i]+a[i];
    }

    rep(l,1,n-1){
        rep(r,l+1,n){
            ll s1 = pre[l]%3;
            ll s2 = (pre[r]-pre[l]) %3;
            ll s3 = (pre[n]-pre[r])%3;

            bool ok = (s1==s2 && s2==s3);
            bool notok = (s1!=s2 && s2!=s3 && s1!=s3);
            if(ok||notok){
                cout<<l<<" "<<r<<endl;
                return;
            }
        }
    }
    cout<<0<<" "<<0<<endl;
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll t=1;
    cin>>t;
    while(t--) forrealtho();
    return 0;
}
