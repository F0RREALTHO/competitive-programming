// Codeforces: https://codeforces.com/contest/2061/B
// Problem: Kevin and Geometry
// Submission: https://codeforces.com/contest/2061/submission/302219645
// Language: C++17 (GCC 7-32)
// Submitted: 2025-01-21T12:07:36.000Z
// Rating: 1100
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

void forrealtho(){
    ll n;
    cin>>n;
    vector<ll> a(n);
    rep(i,0,n) cin>>a[i];
    
    map<ll,ll> f;
    vector<ll> single;
    
    for(ll x:a) f[x]++;
    
    vector<ll> pairs;
    for(auto [num,count]:f) {
        if(count>=2) pairs.push_back(num);
        if(count==1 || count==3) single.push_back(num);
        if(count>=4) {
            cout<<num<< " "<<num<<" "<<num<<" "<<num<<endl;
            return;
        }
    }
    
    if(pairs.size()>=2) {
        cout<<pairs[0] << " " <<pairs[0]<<" " 
             <<pairs[1]<<" "<<pairs[1]<<endl;
        return;
    }
    
    if(pairs.size() == 1) {
        ll c = pairs[0];  
        sort(all(single));
        
        rep(i,0,single.size()-1) {
            ll a = single[i], b = single[i+1];
            if(abs(a-b)<2*c) {
                cout<<a<<" "<<c<< " "<<b<<" "<<c<<endl;
                return;
            }
        }
    }
    
    cout<<-1<<endl;
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll t=1;
    cin>>t;
    while(t--) forrealtho();
    return 0;
}
