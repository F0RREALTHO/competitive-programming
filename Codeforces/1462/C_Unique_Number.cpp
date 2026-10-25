// Codeforces: https://codeforces.com/contest/1462/C
// Problem: Unique Number
// Submission: https://codeforces.com/contest/1462/submission/280345036
// Language: C++17 (GCC 7-32)
// Submitted: 2024-09-08T15:42:20.000Z
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
    int x;
    cin>>x;

    if(x>45)
    {
        cout<<-1<<endl;
        return;
    }
    
    vector<ll> digits;
    for (int i = 9; i >= 1; i--)
    {
        if (x>=i)
        {
            digits.push_back(i);
            x -= i;
        }
    }

    ll num = 0;
    
    sort(all(digits));
    rep(i,0,digits.size())
    {
        num = num*10 + digits[i];
    }

    cout<<num<<endl;
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll t=1;
    cin>>t;
    while(t--) forrealtho();
    return 0;
}
