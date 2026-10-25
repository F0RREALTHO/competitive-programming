// Codeforces: https://codeforces.com/contest/1237/B
// Problem: Balanced Tunnel
// Submission: https://codeforces.com/contest/1237/submission/311555046
// Language: C++17 (GCC 7-32)
// Submitted: 2025-03-20T15:46:07.000Z
// Rating: 1300
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
    vector<ll> a(n) , b(n);
    unordered_map<ll,ll> mp;
    rep(i,0,n) cin>>a[i];
    rep(i,0,n) cin>>b[i];
    if(a[0]==b[n-1]){
        cout<<n-1<<endl;
        return;
    }
    ll k =0 , ans = 0;
    rep(i,0,n){
        ll cur = a[i];
        if(mp[b[k]]!=0) k++;
        while(cur!=b[k] && mp[cur]==0){
            mp[b[k]]++;
            ans++;
            k++;
        }
        if(cur==b[k]){
            mp[b[k]]++;
            k++;
        }
        if(k+1==n){
            break;
        }
    }
    cout<<ans<<endl;
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll t=1;
    // cin>>t;
    while(t--) forrealtho();
    return 0;
}
