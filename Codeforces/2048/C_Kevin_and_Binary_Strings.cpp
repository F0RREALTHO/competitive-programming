// Codeforces: https://codeforces.com/contest/2048/C
// Problem: Kevin and Binary Strings
// Submission: https://codeforces.com/contest/2048/submission/297317730
// Language: C++17 (GCC 7-32)
// Submitted: 2024-12-19T16:12:23.000Z
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
    string s; cin >> s;
    ll i =0;
    ll n = s.size();
    for ( i = 0 ; i < n ; i++) if (s[i] == '0') break;
    if (i==n) i = n - 1 ;
    ll k = i - 1; ll j = 0;
    for (j =i ; j < n && k >= 0 ; j++ , k--) if (s[j] =='1') break;
    k++;
    cout << 1 << " " << n << " " << k + 1  << " " <<  k + n - i<<endl;
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll t=1;
    cin>>t;
    while(t--) forrealtho();
    return 0;
}
