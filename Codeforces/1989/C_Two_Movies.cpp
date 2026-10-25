// Codeforces: https://codeforces.com/contest/1989/C
// Problem: Two Movies
// Submission: https://codeforces.com/contest/1989/submission/309796914
// Language: C++17 (GCC 7-32)
// Submitted: 2025-03-10T15:11:43.000Z
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
   vector<ll> a(n),b(n);
   rep(i,0,n) cin>>a[i];
   rep(i,0,n) cin>>b[i];
   
   ll ra=0,rb=0;
   
   rep(i,0,n){
       if(a[i]==1 && b[i]!=1){
           ra+=1;
       }
       else if(b[i]==1 && a[i]!=1){
           rb+=1;
       }
   }
   rep(i,0,n){
       if(a[i]==1 && b[i]==1){
           if(ra<=rb) ra+=1;
           else rb+=1;
       }
   }
   rep(i,0,n){
       if(a[i]==-1 && b[i]==-1){
           if(ra>rb) ra-=1;
           else rb-=1;
       }
   }
   rep(i,0,n){
       if((a[i]==0 && b[i]==-1) || (a[i]==-1 && b[i]==0)){
           if(a[i]==0) ra+=0;
           else rb+=0;
       }
   }
   cout<<min(ra,rb)<<endl;
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll t=1;
    cin>>t;
    while(t--) forrealtho();
    return 0;
}
