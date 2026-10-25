// Codeforces: https://codeforces.com/contest/2113/B
// Problem: Good Start
// Submission: https://codeforces.com/contest/2113/submission/327843463
// Language: C++17 (GCC 7-32)
// Submitted: 2025-07-06T21:24:19.000Z
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
    ll w,h,a,b; cin>>w>>h>>a>>b;
    ll x1,y1,x2,y2; cin>>x1>>y1>>x2>>y2;

    if(x1==x2){
        cout<<((y1-y2)%b==0?"Yes":"No")<<endl;
        return;
    }
    if(y1==y2){
        cout<<((x1-x2)%a==0?"Yes":"No")<<endl;
        return;
    }

    if((x1-x2)%a==0 || (y1-y2)%b==0) {
        cout<<"Yes"<<endl;
        return;
    }
    cout<<"No"<<endl;
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll t=1;
    cin>>t;
    while(t--) forrealtho();
    return 0;
}
