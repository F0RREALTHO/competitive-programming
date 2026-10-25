// Codeforces: https://codeforces.com/contest/2230/B
// Problem: Digit String
// Submission: https://codeforces.com/contest/2230/submission/375089938
// Language: C++17 (GCC 7-32)
// Submitted: 2026-05-18T14:49:33.000Z
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
    string s; cin>>s;
    ll c13 = 0;
    ll n = s.length();
    rep(i,0,n){
        if(s[i]=='1' || s[i]=='3') c13++;
    }

    ll cnt2 = 0, maxi = 0;
    rep(i,0,n+1){
        ll cur = cnt2+c13;
        maxi = max(maxi,cur);
        if(i<n){
            if(s[i]=='2') cnt2++;
            else if(s[i]=='1' || s[i]=='3') c13--;
        }
    }

    cout<<n-maxi<<endl;
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll t=1;
    cin>>t;
    while(t--) forrealtho();
    return 0;
}
