// Codeforces: https://codeforces.com/contest/1294/C
// Problem: Product of Three Numbers
// Submission: https://codeforces.com/contest/1294/submission/311404233
// Language: C++17 (GCC 7-32)
// Submitted: 2025-03-19T12:51:52.000Z
// Rating: 1300
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
    ll x;cin>>x;
    if(x<8){
        cout<<"NO"<<endl;
        return;
    }
    vector<ll> ff;
    for(ll i =2;i*i<=x;i++){
        if(x%i==0){
            ff.emplace_back(i);
            x/=i;
            break;
        }
    }
    for(ll i =2;i*i<=x && ff.size()>=1;i++){
        if(x%i==0 && i!=ff[0]){
            ff.emplace_back(i);
            x/=i;
            break;
        }
    }
    if(x>1 &&(ff.empty() ||(x!=ff[0] && (ff.size()<2 || x!=ff[1]))))  ff.emplace_back(x);
    if(ff.size()==3){
        cout<<"YES"<<endl;
        cout<<ff[0]<<" "<<ff[1]<<" "<<ff[2]<<endl;
    } else{
        cout<<"NO"<<endl;
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
