// Codeforces: https://codeforces.com/contest/2148/E
// Problem: Split
// Submission: https://codeforces.com/contest/2148/submission/360893558
// Language: C++17 (GCC 7-32)
// Submitted: 2026-01-31T16:42:14.000Z
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
    ll n,k; cin>>n>>k;
    vector<ll> a(n);
    rep(i,0,n) cin>>a[i];

    ll maxi = *max_element(all(a));
    vector<ll> tot(maxi+1,0);
    for(ll x:a) tot[x]++;

    bool ok= true;
    rep(i,1,maxi+1){
        if(tot[i]%k!=0){
            ok=0;
            break;
        }
    }
    if(!ok){
        cout<<0<<endl;
        return;
    }

    vector<ll> q(maxi+1,0);
    rep(i,1,maxi+1){
        q[i]=tot[i]/k;
    }

    vector<ll> cur(maxi+1,0);
    ll ans =0;
    ll l = 0;
    rep(i,0,n){
        cur[a[i]]++;
        while(cur[a[i]]>q[a[i]]){
            cur[a[l]]--;
            l++;
        }
        ans+=(i-l+1);
    }
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
