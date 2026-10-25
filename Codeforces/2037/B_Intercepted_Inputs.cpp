// Codeforces: https://codeforces.com/contest/2037/B
// Problem: Intercepted Inputs
// Submission: https://codeforces.com/contest/2037/submission/292007029
// Language: C++17 (GCC 7-32)
// Submitted: 2024-11-17T15:21:26.000Z
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

void forrealtho() {
    ll n;
    cin >> n;
    
    vector<ll> freq(n+1, 0); 
    
    rep(i,0,n) {
        ll val;
        cin >> val;
        freq[val]++;
    }
    
    ll values = n-2;
    ll row = 0, col = 0;
    
    rep(i,1,sqrt(values)+1) {
        if(values % i == 0) {
            ll div = values/i;
            
            if(freq[i] > 0 && freq[div] > 0) {
                if(i == div && freq[i] < 2) continue;
                
                row = i;
                col = div;
                break;
            }
        }
    }
    
    if(row == 0) cout << "-1" << endl;
    else cout << row << " " << col << endl;
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll t=1;
    cin>>t;
    while(t--) forrealtho();
    return 0;
}
