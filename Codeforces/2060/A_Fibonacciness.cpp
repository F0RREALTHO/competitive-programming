// Codeforces: https://codeforces.com/contest/2060/A
// Problem: Fibonacciness
// Submission: https://codeforces.com/contest/2060/submission/301747667
// Language: C++17 (GCC 7-32)
// Submitted: 2025-01-19T14:43:35.000Z
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
    ll a1,a2,a4,a5;
    cin>>a1>>a2>>a4>>a5;
    ll c1 = a1+a2 , c2 = a4-a2, c3=a5-a4;
    set<ll> opt = {c1,c2,c3};
    ll maxi = 0;
    for(auto a3:opt){
        ll cnt = 0;
        if(a3==a1+a2) cnt++;
        if(a4==a2+a3) cnt++;
        if(a5==a3+a4) cnt++;
        maxi = max(maxi,cnt);
    }
    cout<<maxi<<endl;
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll t=1;
    cin>>t;
    while(t--) forrealtho();
    return 0;
}
