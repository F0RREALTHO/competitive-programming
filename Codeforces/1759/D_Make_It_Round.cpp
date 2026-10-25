// Codeforces: https://codeforces.com/contest/1759/D
// Problem: Make It Round
// Submission: https://codeforces.com/contest/1759/submission/304592385
// Language: C++17 (GCC 7-32)
// Submitted: 2025-02-05T16:51:04.000Z
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

ll cntfac(ll x, ll y){
    ll cnt =0;
    while(x%y==0 && y>0){
        cnt++;
        x/=y;
    }
    return cnt;
}


void forrealtho()
{
    ll n,m;
    cin>>n>>m;

    if(m<=10 && n==1){
        cout<<n*m<<endl;
        return;
    }
    
    ll cnt2 = cntfac(n,2);
    ll cnt5 = cntfac(n,5);

    ll k =1;
    while(cnt2<cnt5 && k*2<=m){
        cnt2++;
        k*=2;
    }
    while(cnt5<cnt2 && k*5<=m){
        cnt5++;
        k*=5;
    }
    while(k*10<=m) k*=10;
    k *=m/k;
    cout<<n*k<<endl;
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll t=1;
    cin>>t;
    while(t--) forrealtho();
    return 0;
}
