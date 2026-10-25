// Codeforces: https://codeforces.com/contest/1744/D
// Problem: Divisibility by 2^n
// Submission: https://codeforces.com/contest/1744/submission/304394597
// Language: C++17 (GCC 7-32)
// Submitted: 2025-02-04T12:34:01.000Z
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
    ll n;
    cin>>n;
    vector<ll> a(n);
    ll ep = 0;
    vector<ll> honor;
    rep(i,0,n) {
        cin>>a[i];
        ll p =i+1;
        ll pp = 0;
        while((p)%2==0){
            pp++;
            p/=2;
        }
        if(pp>0)  honor.push_back(pp);
    }
    sort(all(honor),greater<ll>());
    vector<ll> acpy = a;
    ll cnt2 =0;
    rep(i,0,n){
        while(acpy[i]%2==0){
            acpy[i] /=2;
            cnt2++;
        }
    }
    ll ans =0;
    ll idx = 0;
    while(cnt2<n && idx<honor.size()){
        cnt2+=honor[idx++];
        ans++;
    }
    if(cnt2>=n){
        cout<<ans<<endl;
    } else {
        cout<<-1<<endl;
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
