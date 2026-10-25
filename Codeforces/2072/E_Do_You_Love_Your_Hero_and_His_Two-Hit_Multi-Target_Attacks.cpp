// Codeforces: https://codeforces.com/contest/2072/E
// Problem: Do You Love Your Hero and His Two-Hit Multi-Target Attacks?
// Submission: https://codeforces.com/contest/2072/submission/307770281
// Language: C++17 (GCC 7-32)
// Submitted: 2025-02-25T15:45:54.000Z
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

void forrealtho()
{
    ll k;
    cin>>k;
    if(k==0){
        cout<<1<<endl<<0<<" "<<0<<endl;
        return;
    }
    vector<ll> grp;
    ll rem = k;
    while(rem>0){
        ll r = (1+sqrt(1+8*rem))/2;
        if(r<2) r=2;
        while((ll)r*(r-1)/2>rem) r--;
        grp.push_back(r);
        rem-=(ll)r*(r-1)/2;
    }
    ll n =0;
    for(auto g:grp) n+=g;
    cout<<n<<endl;
    
    ll gidx = 0;
    for(auto g:grp){
        ll y = gidx;
        ll b = gidx*10000;
        rep(j,0,g){
            ll x =b+j;
            cout<<x<<" "<<y<<endl;
        }
        gidx++;
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
