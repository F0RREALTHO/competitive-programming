// Codeforces: https://codeforces.com/contest/2110/C
// Problem: Racing
// Submission: https://codeforces.com/contest/2110/submission/326180234
// Language: C++17 (GCC 7-32)
// Submitted: 2025-06-26T17:22:36.000Z
// Rating: 1400
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
    vector<ll> a(n); rep(i,0,n) cin>>a[i];
    vector<ll> l(n),r(n);
    rep(i,0,n) cin>>l[i]>>r[i];

    ll L = 0;
    vector<ll> last;
    rep(i,0,n){
        if(a[i]==-1) last.push_back(i);
        else L+=a[i];
        while(L<l[i]){
            if(last.empty()){
                cout<<-1<<endl;
                return;
            }
            a[last.back()]=1;
            last.pop_back();
            L++;
        }
        while(L+last.size()>r[i]){
            if(last.empty()){
                cout<<-1<<endl;
                return;
            }
            a[last.back()]=0;
            last.pop_back();
        }
    }
    rep(i,0,n){
        cout<<max(0LL,a[i])<<" ";
    }cout<<endl;
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll t=1;
    cin>>t;
    while(t--) forrealtho();
    return 0;
}
