// Codeforces: https://codeforces.com/contest/2144/D
// Problem: Price Tags
// Submission: https://codeforces.com/contest/2144/submission/338797293
// Language: C++17 (GCC 7-32)
// Submitted: 2025-09-15T16:01:04.000Z
// Rating: 1800
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
#define omset tree <pll, null_type,less<ll>, rb_tree_tag,tree_order_statistics_node_update>
#define endl "\n" 
const ll MOD= 1e9+7;
const ll MAX_C=200005;

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
    ll n,y; cin>>n>>y;
    vector<ll> ocnt(MAX_C,0);
    rep(i,0,n){
        ll c; cin>>c;
        ocnt[c]++;
    }

    vector<ll> wow(MAX_C,0);
    wow[0] = 0;
    rep(i,1,MAX_C){
        wow[i] = wow[i-1] + ocnt[i];
    }
    
    ll bb = LLONG_MIN;
    rep(x,2,MAX_C){
        ll sum = 0;
        ll mat = 0;
        for(ll p=1; (p-1)*x<MAX_C; p++){
            ll l = (p-1)*x;
            ll r = min(p*x, MAX_C-1);
            if(l >= r) break;
            
            ll k = wow[r] - wow[l];
            if(k>0){
                sum += p*k;
                mat += min(k, ocnt[p]);
            }
        }
        ll inc = sum - (n-mat)*y;
        bb = max(bb,inc);
    }
    cout<<bb<<endl;
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll t=1;
    cin>>t;
    while(t--) forrealtho();
    return 0;
}
