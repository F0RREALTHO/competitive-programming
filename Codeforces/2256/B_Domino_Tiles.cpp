// Codeforces: https://codeforces.com/contest/2256/B
// Problem: Domino Tiles
// Submission: https://codeforces.com/contest/2256/submission/386500172
// Language: C++17 (GCC 7-32)
// Submitted: 2026-08-10T14:41:34.000Z
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
const ll MOD= 998244353;
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

ll f(string& s, ll i, ll n, ll lst, ll prev, vector<vector<vector<ll>>>& dp){
    if(i==n) return 1;
    if(dp[i][lst][prev]!=-1) return dp[i][lst][prev];

    dp[i][lst][prev] =0;
    if(s[i]=='?'){
        ll cur = lst;
        if(cur!=prev){
            dp[i][lst][prev]+=f(s,i+1,n,0,cur,dp);
        }
        cur = lst+1;
        if(cur!=prev) dp[i][lst][prev] +=f(s,i+1,n,1,cur,dp);
    }else{
        ll x = s[i]-'0';
        ll cur = lst+x;
        if(cur!=prev) dp[i][lst][prev] = f(s,i+1,n,x,cur,dp);
    }
    return dp[i][lst][prev] % MOD;

}

void forrealtho()
{
    ll n; cin>>n;
    string s; cin>>s;
    vector<vector<vector<ll>>> dp(n, vector<vector<ll>>(2, vector<ll>(3, -1)));

    ll ans=0;
    rep(i,0,2){
        if(s[0]!='?' && s[0]-'0'!=i)continue;
        rep(j,0,2){
            if(s[1]!='?' && s[1]-'0'!=j) continue;

            ans+=f(s,2,n,j,i+j,dp);
            ans%=MOD;
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
