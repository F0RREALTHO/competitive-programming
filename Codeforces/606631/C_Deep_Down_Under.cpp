// Codeforces: https://codeforces.com/contest/606631/C
// Problem: Deep Down Under
// Submission: https://codeforces.com/contest/606631/submission/317488948
// Language: C++17 (GCC 7-32)
// Submitted: 2025-04-27T16:54:16.000Z
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
const ll MAXN = 1e7 + 5;

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

vector<bool> ip(MAXN, true);
vector<ll> pc(MAXN, 0);

void sieve() {
    ip[0]=ip[1]=false;
    rep(i,2,MAXN) {
        if(ip[i]) {
            for(ll j=i*i;j<MAXN; j+=i) {
                ip[j] = false;
            }
        }
    }
    rep(i,1,MAXN) {
        pc[i] = pc[i-1]+(ip[i]?1:0);
    }
}

void forrealtho()
{
    ll l,r; cin>>l>>r;
    ll ans = pc[r]-pc[l-1];
    if(l==1) ans++; 
    cout<<ans<<endl;
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    sieve();
    ll t=1;
    cin>>t;
    while(t--) forrealtho();
    return 0;
}
