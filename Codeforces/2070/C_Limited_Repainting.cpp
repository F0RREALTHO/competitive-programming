// Codeforces: https://codeforces.com/contest/2070/C
// Problem: Limited Repainting
// Submission: https://codeforces.com/contest/2070/submission/309763562
// Language: C++17 (GCC 7-32)
// Submitted: 2025-03-10T14:13:41.000Z
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

bool ok(ll m, vector<ll> &a,ll k,string &s){
    ll cnt=0;
    ll n = a.size();
    char lst = 'R';
    rep(i,0,n){
        if(a[i]>m){
            if(s[i]=='B' && lst !='B') cnt++;
            lst=s[i];
        }
    }
    return cnt<=k;  
}

void forrealtho()
{
    ll n,k;
    cin>>n>>k;
    string s; vector<ll> a(n);
    cin>>s;
    rep(i,0,n) cin>>a[i];
    ll l =0, r =*max_element(all(a)) , ans = -1;
    while(l<=r){
        ll m = (l+r)/2;
        if(ok(m,a,k,s)){
            ans = m;
            r=m-1;
        } else{
            l=m+1;
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
