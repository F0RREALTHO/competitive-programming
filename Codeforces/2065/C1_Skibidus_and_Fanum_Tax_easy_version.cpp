// Codeforces: https://codeforces.com/contest/2065/C1
// Problem: Skibidus and Fanum Tax (easy version)
// Submission: https://codeforces.com/contest/2065/submission/305239978
// Language: C++17 (GCC 7-32)
// Submitted: 2025-02-09T15:22:40.000Z
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

bool srt(ll n, vector<ll>& a, ll valb) {
    if(n==0) return true;
    
    ll prev = min(a[0], valb-a[0]);
    rep(i,1,n) {
        ll curr=a[i];
        ll opt1= curr;
        ll opt2 =valb- curr;
        vector<ll> hehe;
        
        if(opt1 >= prev) hehe.push_back(opt1);
        if(opt2 >= prev) hehe.push_back(opt2);   
        if(hehe.empty()) return false;
            
        prev = *min_element(all(hehe));
    }
    return true;
}

void forrealtho() {
    ll n,m;
    cin>>n>>m;
    vector<ll> a(n),b(m);
    rep(i,0,n) cin>>a[i];
    rep(i,0,m) cin>>b[i];
    
    ll valb =b[0];
    if(srt(n,a,valb)) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll t=1;
    cin>>t;
    while(t--) forrealtho();
    return 0;
}
