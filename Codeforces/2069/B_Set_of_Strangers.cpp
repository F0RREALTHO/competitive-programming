// Codeforces: https://codeforces.com/contest/2069/B
// Problem: Set of Strangers
// Submission: https://codeforces.com/contest/2069/submission/346167678
// Language: C++17 (GCC 7-32)
// Submitted: 2025-10-28T12:54:04.000Z
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
    ll n,m; cin>>n>>m;
    vector<vector<ll>> a(n,vector<ll>(m));
    unordered_map<ll,ll> v;
    rep(i,0,n){
        rep(j,0,m){
            cin>>a[i][j];
            v[a[i][j]]=1;
        }
    }
    vector<pair<ll,ll>> dir = {{1,0},{-1,0},{0,-1},{0,1}};

    ll color = -1;
    ll maxi = 0;
    rep(i,0,n){
        rep(j,0,m){
            for(auto [dx,dy]:dir){
                ll nx = i+dx;
                ll ny = j+dy;
                if(nx>=0 && ny>=0 && nx<n && ny<m && a[nx][ny]==a[i][j]){
                    v[a[i][j]]=2;
                }
            }
        }
    }

    ll sum = 0, mx= 0 ;
    for(auto [clr,val]:v){
        sum+=val;
        mx = max(mx,val);
    }

    cout<<sum-mx<<endl;
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll t=1;
    cin>>t;
    while(t--) forrealtho();
    return 0;
}
