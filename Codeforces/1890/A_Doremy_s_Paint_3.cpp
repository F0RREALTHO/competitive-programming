// Codeforces: https://codeforces.com/contest/1890/A
// Problem: Doremy's Paint 3
// Submission: https://codeforces.com/contest/1890/submission/312593036
// Language: C++17 (GCC 7-32)
// Submitted: 2025-03-26T15:45:00.000Z
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
    ll n;
    cin>>n;
    map<ll,ll> mp;
    // ll u1 = 0,u2=0;
    rep(i,0,n){
        ll x;
        cin>>x;
        mp[x]++;
    }
    if (mp.size()==1 || n==1){
        cout<<"Yes"<<endl;
        return;
    }
    if(mp.size()>=3){
        cout<<"No"<<endl;
        return;
    }
    auto it=mp.begin();
    ll u1=(*it).F,c1=(*it).S;
    it++;
    ll u2=(*it).F,c2=(*it).S;
    if(abs(c1-c2)<=1){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll t=1;
    cin>>t;
    while(t--) forrealtho();
    return 0;
}
