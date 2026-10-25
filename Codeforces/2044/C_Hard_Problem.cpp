// Codeforces: https://codeforces.com/contest/2044/C
// Problem: Hard Problem
// Submission: https://codeforces.com/contest/2044/submission/296626218
// Language: C++17 (GCC 7-32)
// Submitted: 2024-12-15T14:49:15.000Z
// Rating: 800
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
    ll m,a,b,c;
    cin>>m>>a>>b>>c;
    
    ll total_seats = 2 *m;
    
    ll mon1 = min(a, m);
    ll mon2 = min(b, m);
    
    ll fmon = c;
    ll rs1 = m- mon1;
    ll rs2 = m -mon2;
    
    ll fr1 = min(rs1, fmon);
    fmon -= fr1;
    ll fr2 = min(rs2, fmon);
    
    ll total_seated =mon1 +mon2 +fr1 + fr2;

    cout<<total_seated<<endl;
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll t=1;
    cin>>t;
    while(t--) forrealtho();
    return 0;
}
