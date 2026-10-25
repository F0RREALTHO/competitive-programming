// Codeforces: https://codeforces.com/contest/2094/C
// Problem: Brr Brrr Patapim
// Submission: https://codeforces.com/contest/2094/submission/315343292
// Language: C++17 (GCC 7-32)
// Submitted: 2025-04-13T15:50:41.000Z
// Rating: 900
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
    vector<vector<ll>> a(n,vector<ll>(n));
    rep(i,0,n){
        rep(j,0,n){
            cin>>a[i][j];
        }
    }
    vector<ll> p(2*n+1,-1);
    vector<bool> us(2*n+1,false);
    rep(i,0,n){
        rep(j,0,n){
            ll k = i+j+2;
            if(p[k]==-1){
                p[k]=a[i][j];
                us[p[k]]=true;
            }
        }
    }
    rep(i,1,2*n+1){
        if(!us[i]){
            p[1]=i;
            break;
        }
    }
    rep(i,1,2*n+1){
        cout<<p[i]<<" ";
    }cout<<endl;
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll t=1;
    cin>>t;
    while(t--) forrealtho();
    return 0;
}
