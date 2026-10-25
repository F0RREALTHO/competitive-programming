// Codeforces: https://codeforces.com/contest/1848/B
// Problem: Vika and the Bridge
// Submission: https://codeforces.com/contest/1848/submission/395810815
// Language: C++23 (GCC 14-64, msys2)
// Submitted: 2026-10-24T08:31:25.000Z
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

// bool ok(vector<ll>& a, ll jumps){
//     ll n = a.size();
//     if(jumps>=n) return true;
//     bool repaint = true;
//     ll i = jumps;
//     ll color = a[i];
//     while(i<n){
//         while(i+1<n && a[i+1]==color) i++;
//         if(a[i]==color){
//             i+=jumps+1;
//         }
//         else if(a[i]!=color && repaint){
//             repaint = false;
//             i+=jumps+1;
//         }else{
//             return false;
//         }
//     }
//     return true;
// }

void ok(ll c, ll g, vector<pair<ll,ll>>& bst){
    if(g>bst[c].F){
        bst[c].S = bst[c].F;
        bst[c].F = g;
    }else if(g>bst[c].S){
        bst[c].S=g;
    }
}

void forrealtho()
{
    ll n,k; cin>>n>>k;
    vector<ll> a(n);
    rep(i,0,n) cin>>a[i];
    ll ans = n;

    vector<ll> lst(n+1,-1);
    vector<pair<ll,ll>> bst(k+1,{0,0});

    rep(i,0,n){
        ll c=a[i];
        ll g = i-lst[c]-1;
        ok(c,g,bst);
        lst[c]=i;
    }

    rep(i,1,k+1){
        if(lst[i]==-1) continue;

        ll g = n-lst[i]-1;
        ok(i,g,bst);
        ll ned = max(bst[i].F/2, bst[i].S);
        ans = min(ans,ned);
    }
    cout<<ans<<endl;


    // ll l =0, r=n;
    // ll ans = n;
    // while(l<=r){
    //     ll m = (l+r)/2;
    //     if(ok(a,m)) {
    //         r = m-1;
    //         ans = min(ans,m);
    //     }
    //     else l=m+1;
    // }
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll t=1;
    cin>>t;
    while(t--) forrealtho();
    return 0;
}
