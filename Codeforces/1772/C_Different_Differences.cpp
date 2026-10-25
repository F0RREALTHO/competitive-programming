// Codeforces: https://codeforces.com/contest/1772/C
// Problem: Different Differences
// Submission: https://codeforces.com/contest/1772/submission/304678862
// Language: C++17 (GCC 7-32)
// Submitted: 2025-02-06T10:10:32.000Z
// Rating: 1000
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
    ll k,n;
    cin>>k>>n;
    vector<ll> a(k);
    a[0]=1 , a[k-1] =n;
    ll p =k-2;
    ll ele = (n-1)/2;
    ll mini = 1;
    rep(i,1,k-1){
        if(a[i-1]+mini+(k-i-1)<=n ){
            a[i]=a[i-1]+mini;
            if(a[i]==a[i-1]){
                a[i]++;
            }
            mini++;
            p--;
        } else {
            a[i]=a[i-1]+1;
        }
    }
    rep(i,0,k){
        cout<<a[i]<<" ";
    } cout<<endl;
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll t=1;
    cin>>t;
    while(t--) forrealtho();
    return 0;
}
