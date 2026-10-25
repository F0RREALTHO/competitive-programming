// Codeforces: https://codeforces.com/contest/2127/B
// Problem: Hamiiid, Haaamid... Hamid?
// Submission: https://codeforces.com/contest/2127/submission/334502082
// Language: C++17 (GCC 7-32)
// Submitted: 2025-08-19T09:03:16.000Z
// Rating: 1300
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
    ll n,x; cin>>n>>x;
    string s; cin>>s;
    if(x==1 || x==n){
        cout<<1<<endl;
        return;
    }
    ll l = LLONG_MAX , r = LLONG_MAX;
    rrep(i,x-2,0){
        if(s[i]=='#'){
            l=i+1;
            break;
        }
    }
    rep(i,x,n){
        if(s[i]=='#'){
            r = i+1;
            break;
        }
    }
    if(l==LLONG_MAX && r==LLONG_MAX){
        cout<<1<<endl;
        return;
    }
    cout<<max(min(x,n-r+2),min(l+1,n-x+1))<<endl;
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll t=1;
    cin>>t;
    while(t--) forrealtho();
    return 0;
}
