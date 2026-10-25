// Codeforces: https://codeforces.com/contest/2155/B
// Problem: Abraham's Great Escape
// Submission: https://codeforces.com/contest/2155/submission/347296515
// Language: C++17 (GCC 7-32)
// Submitted: 2025-11-03T16:57:33.000Z
// Rating: 1100
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
    ll n,k; cin>>n>>k;
    if(k==n*n-1){
        cout<<"NO"<<endl;
        return;
    }

    vector<vector<char>> ans(n,vector<char>(n,'.'));
    ll cnt = 0;
    
    rep(i,0,n){
        rep(j,0,n){
            if(cnt!=k){
                ans[i][j]='U';
                cnt++;
            }
        }
    }

    rep(i,0,n-1){
        rep(j,0,n){
            if(ans[i][j]=='.') ans[i][j]='D';
        }
    }

    bool ok = true;
    rep(j,0,n){
        if(ans[n-1][j]=='.'){
            if(ans[n-1][j]!='U' && ok) {
                ans[n-1][j]='R';
                ok = false;
            }
            else ans[n-1][j]='L';
        } 
    }

    cout<<"YES"<<endl;
    rep(i,0,n){
        rep(j,0,n) cout<<ans[i][j];
        cout<<endl;
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
