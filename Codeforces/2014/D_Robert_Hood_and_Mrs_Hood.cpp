// Codeforces: https://codeforces.com/contest/2014/D
// Problem: Robert Hood and Mrs Hood
// Submission: https://codeforces.com/contest/2014/submission/337054580
// Language: C++17 (GCC 7-32)
// Submitted: 2025-09-05T18:05:01.000Z
// Rating: 1400
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
    ll n,d,k; cin>>n>>d>>k;
    vector<ll> start(n+2,0);
    vector<ll> end(n+2,0);
    rep(i,0,k){
        ll l,r; cin>>l>>r;
        start[l]++;
        end[r]++;
    }

    ll cj = 0;
    ll mx = -1, mi = LLONG_MAX;
    ll maxid = -1 , minid = -1;

    rep(i,1,d+1){
        cj+=start[i];
    }
    rep(i,d,n+1){
        if(i>d){
            cj -=end[i-d];
        }
        ll st = i-d+1;
        
        if(cj>mx){
            mx = cj;
            maxid = st;
        }
        if(cj<mi){
            mi = cj;
            minid = st;
        }

        if(i+1<=n){
            cj+=start[i+1];
        }
    }
    cout<<maxid<<" "<<minid<<endl;
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll t=1;
    cin>>t;
    while(t--) forrealtho();
    return 0;
}
