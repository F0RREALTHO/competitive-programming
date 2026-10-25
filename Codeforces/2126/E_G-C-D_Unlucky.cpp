// Codeforces: https://codeforces.com/contest/2126/E
// Problem: G-C-D, Unlucky!
// Submission: https://codeforces.com/contest/2126/submission/329414833
// Language: C++17 (GCC 7-32)
// Submitted: 2025-07-17T15:09:46.000Z
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
    ll n; cin>>n;
    vector<ll> p(n),s(n);
    rep(i,0,n) cin>>p[i];
    rep(i,0,n) cin>>s[i];

    bool hehe = true;
    rep(i,0,n-1){
        if(p[i] % p[i+1]!=0){
            hehe = false;
            cout<<"NO"<<endl;
            return;
        }
    }

    rep(i,0,n-1){
        if(s[i+1]%s[i]!=0){
            hehe = false;
            cout<<"NO"<<endl;
            return;
        }
    }

    if(p[n-1]!=s[0]){
        hehe = false;
        cout<<"NO"<<endl;
        return;
    }

    ll ovr = p[n-1];
    rep(i,0,n-1){
        if(__gcd(p[i],s[i+1])!=ovr){
            hehe = false;
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<(hehe?"YES":"NO")<<endl;
    
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll t=1;
    cin>>t;
    while(t--) forrealtho();
    return 0;
}
