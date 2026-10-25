// Codeforces: https://codeforces.com/contest/1692/E
// Problem: Binary Deque
// Submission: https://codeforces.com/contest/1692/submission/395612575
// Language: C++23 (GCC 14-64, msys2)
// Submitted: 2026-10-22T17:43:26.000Z
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
    ll n,s; cin>>n>>s;
    vector<ll> a(n);
    ll cur = 0;
    rep(i,0,n){
        cin>>a[i]; cur+=a[i];
    }
    if(cur<s){
        cout<<-1<<endl;
        return;
    }
    if(cur==s){
        cout<<0<<endl;
        return;
    }
    ll cur_sum =0;
    ll l = 0;
    ll maxi  =-1;
    rep(r,0,n){
        cur_sum+=a[r];
        while(cur_sum>s && l<=r){
            cur_sum-=a[l];
            l++;
        }
        if(cur_sum==s){
            maxi = max(maxi,r-l+1);
        }
    }
   cout<< (maxi==-1? -1:n-maxi)<<endl;
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll t=1;
    cin>>t;
    while(t--) forrealtho();
    return 0;
}
