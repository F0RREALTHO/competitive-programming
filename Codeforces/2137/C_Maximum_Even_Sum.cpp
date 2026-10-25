// Codeforces: https://codeforces.com/contest/2137/C
// Problem: Maximum Even Sum
// Submission: https://codeforces.com/contest/2137/submission/360750463
// Language: C++17 (GCC 7-32)
// Submitted: 2026-01-30T16:47:05.000Z
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

ll chek(ll k, ll a , ll b){
    if(k<=0) return -1;
    if(b%k!=0) return -1;
    ll sum = (a)*k +(b)/k;
    if(!(sum&1)) return sum;
    return -1;
}

void forrealtho()
{
    ll a,b; cin>>a>>b;
    ll ans = -1;
    ans = max(ans,chek(1,a,b));
    ans = max(ans,chek(b,a,b));
    if(!(b&1)) ans = max(ans,chek(b/2,a,b));

    ll m = b;
    while(!(m&1)) m/=2;
    ans = max(ans,chek(m,a,b));
    cout<<ans<<endl;

}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll t=1;
    cin>>t;
    while(t--) forrealtho();
    return 0;
}
