// Codeforces: https://codeforces.com/contest/2194/D
// Problem: Table Cut
// Submission: https://codeforces.com/contest/2194/submission/376293996
// Language: C++17 (GCC 7-32)
// Submitted: 2026-05-27T13:15:26.000Z
// Rating: 1600
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
    ll n,m; cin>>n>>m;
    vector<ll> a(n*m);
    ll cnt = 0;

    rep(i,0,n*m){cin>>a[i]; cnt+=a[i];}

    ll trg = cnt/2;
    ll maxi = trg*(cnt-trg);
    cout<<maxi<<endl;

    vector<ll> r(m,n);
    ll cur =0;
    ll ok = false;

    if(trg==0){ok = true;}

    rep(j,0,m && !ok){
        rrep(i,n-1,0 && !ok){
            if(a[i*m+j]){cur++;}

            if(cur==trg){
                rep(k,0,j) r[k]=0;
                r[j] = i;

                rep(k,j+1,m) r[k] =n;
                ok = true;
            }
        }
    }

    string ans;

    ll curr_r=0;

    rep(i,0,m){
        while(curr_r<r[i]){
            ans+='D';
            curr_r++;
        }
        ans+='R';
    }

    while(curr_r<n){
        ans+='D';
        curr_r++;
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
