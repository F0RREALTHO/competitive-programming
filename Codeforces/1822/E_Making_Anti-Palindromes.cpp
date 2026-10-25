// Codeforces: https://codeforces.com/contest/1822/E
// Problem: Making Anti-Palindromes
// Submission: https://codeforces.com/contest/1822/submission/306642007
// Language: C++17 (GCC 7-32)
// Submitted: 2025-02-18T09:49:15.000Z
// Rating: 1600
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
    ll n;cin>>n;
    string s; cin>>s;
    if(n&1){
        cout<<-1<<endl;
        return;
    }
    unordered_map<char,ll> mp;
    rep(i,0,n) mp[s[i]]++;
    for(auto &[ch,cntt]:mp){
        if(cntt*2>n){
            cout<<-1<<endl;
            return;
        }
    }
    ll l =0; ll r=n-1;ll p=0;
    unordered_map<char,ll> pp;
    while(l<r){
        if(s[l]==s[r]){
            pp[s[l]]++;
            p++;
        }
        l++,r--;
    }
    ll maxi = 0;
    for(auto &[ch,cntt]:pp){
        maxi = max(maxi,cntt);
    }
    cout<<max(p/2+(p%2),maxi)<<endl; 
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll t=1;
    cin>>t;
    while(t--) forrealtho();
    return 0;
}
