// Codeforces: https://codeforces.com/contest/2269/B
// Problem: KiaKio and Squared Numbers
// Submission: https://codeforces.com/contest/2269/submission/393350960
// Language: C++17 (GCC 7-32)
// Submitted: 2026-10-06T03:34:58.000Z
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
    ll n; cin>>n;
    vector<ll> a(n);
    vector<ll> cnt(9,0);
    vector<ll> cyc = {4,16,37,58,89,145,42,20};
    rep(i,0,n) {
        ll x; cin>>x;
        if(x==1) {
            cnt[8]++;
            continue;
        }
        ll s = 0;
        while(true){
            if(x==1){
                cnt[8]++;
                break;
            }
            bool ok =false;
            rep(j,0,8){
                if(x==cyc[j]) {
                    ll m = (((j-s)%8+8)%8);
                    cnt[m]++;
                    ok = true;
                    break;
                }
            }
            if(ok) break;
            ll y = 0;
            while(x>0){
                ll r = x%10;
                y += r*r;
                x/=10;
            }
            x=y;
            s++;
        }
    }
    ll ans = 0;
    rep(i,0,9) ans+=cnt[i]*(cnt[i]-1)/2;

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
