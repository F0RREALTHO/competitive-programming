// Codeforces: https://codeforces.com/contest/1849/B
// Problem: Monsters
// Submission: https://codeforces.com/contest/1849/submission/281643119
// Language: C++17 (GCC 7-32)
// Submitted: 2024-09-17T16:55:27.000Z
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

ll binexp(ll a, ll b, ll MOD)
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
ll k;
bool cmp(pll p1, pll p2)
{
    if(p1.F%k==0 && p2.F%k==0)
    {
        return p1.S<p2.S;
        // if(p1.F==p2.F)
    }
    if(p1.F%k==0)
    {
        return 1;
    }
    if(p2.F%k==0) return 0;
    else
    {
        if(p1.F%k>p2.F%k) return 1;
        if(p1.F%k<p2.F%k) return 0;
        else return p1.S<p2.S;
    }
}
void forrealtho()
{
    ll n;
    cin>>n>>k;
    vector<pll> v(n);
    rep(i,0,n) cin>>v[i].F;
    rep(i,0,n) v[i].S=i;
    sort(all(v),cmp);
    rep(i,0,n) cout<<v[i].S+1<<" ";
    cout<<endl;

}

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("ans.txt", "w", stdout);
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll t=1;
    cin>>t;
    while(t--) forrealtho();
    return 0;
}
