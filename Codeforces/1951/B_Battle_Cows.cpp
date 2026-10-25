// Codeforces: https://codeforces.com/contest/1951/B
// Problem: Battle Cows
// Submission: https://codeforces.com/contest/1951/submission/298654326
// Language: C++17 (GCC 7-32)
// Submitted: 2024-12-27T11:00:39.000Z
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
    ll n,k;
    cin>>n>>k;
    k--;
    vector<ll> a(n);
    rep(i,0,n)cin>>a[i];
    ll mow = -1;
    rep(i,0,k){
        if(a[i]>a[k]){
            mow = i;
            break;
        }
    }
    if(mow == -1 || mow == 0){
        ll hehe = 0;
        swap(a[k],a[0]);
        rep(i,1,n){
            if(a[i]<a[0]){
                hehe++;
            } else {
                break;
            }
        }
        cout<<hehe<<endl;
    } else {
        swap(a[k],a[0]);
        ll eheh = 0;
        rep(i,1,n){
            if(a[i]<a[0]){
                eheh++;
            } else {
                break;
            }
        }
        swap(a[k],a[0]);
        swap(a[k],a[mow]);
        ll ans = 1;
        rep(i,mow+1,n){
            if(a[i]<a[mow]){
                ans++;
            } else {
                break;
            }
        }
        ans = max(ans,eheh);
        cout<<ans<<endl;
    }

}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll t=1;
    cin>>t;
    while(t--) forrealtho();
    return 0;
}
