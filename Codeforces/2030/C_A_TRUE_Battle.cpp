// Codeforces: https://codeforces.com/contest/2030/C
// Problem: A TRUE Battle
// Submission: https://codeforces.com/contest/2030/submission/291737725
// Language: C++17 (GCC 7-32)
// Submitted: 2024-11-16T04:48:57.000Z
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

void forrealtho() {
    ll n;
    cin >> n;
    string s;
    cin >> s;
    
    
    if(s[0] == '1' || s[n-1] == '1') {
        cout << "YES" << endl;
        return;
    }
    
    rep(i,1,n) {
        if(s[i] == '1' && s[i-1] == '1') {
            cout << "YES" << endl;
            return;
        }
    }
    
    cout << "NO" << endl;
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll t=1;
    cin>>t;
    while(t--) forrealtho();
    return 0;
}
