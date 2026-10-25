// Codeforces: https://codeforces.com/contest/2144/B
// Problem: Maximum Cost Permutation
// Submission: https://codeforces.com/contest/2144/submission/338770508
// Language: C++17 (GCC 7-32)
// Submitted: 2025-09-15T15:15:21.000Z
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
    ll zc = 0;
    vector<bool> bad(n+1,0);
    rep(i,0,n) {
        cin>>a[i];
        if(a[i]==0) zc++;
        else bad[a[i]]=true;
    }

    if(zc==1){
        ll mis = -1;
        rep(i,1,n+1){
            if(!bad[i]){
                mis = i;
                break;
            }
        }
        rep(i,0,n){
            if(a[i]==0){
                a[i]=mis;
                break;
            }
        }

        ll l =-1,r=-1;
        rep(i,0,n){
            if(a[i]!=i+1){
                if(l==-1) l= i+1;
                r=i+1;
            }
        }
        if(l==-1){
            cout<<0<<endl;
            return;
        }
            
        cout<<r-l+1<<endl;
    }else{
        ll l =1;
        while(l<=n && a[l-1]!=0 && a[l-1]==l){ l++;}

        ll r = n;
        while(r>=1 && a[r-1]!=0 && a[r-1]==r) r--;
        if(l>r){
            cout<<0<<endl;
            return;
        }
        else cout<<r-l+1<<endl;
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
