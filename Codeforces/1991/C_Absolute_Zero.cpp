// Codeforces: https://codeforces.com/contest/1991/C
// Problem: Absolute Zero
// Submission: https://codeforces.com/contest/1991/submission/334507677
// Language: C++17 (GCC 7-32)
// Submitted: 2025-08-19T09:52:16.000Z
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
    ll n; cin>>n;
    vector<ll> a(n);
    rep(i,0,n) cin>>a[i];
    set<ll> s(all(a));
    if(s.size()==1){
        if(a[0]==0){
            cout<<0<<endl;
            cout<<endl;
            return;
        }
        cout<<1<<endl;
        cout<<a[0]<<endl;
        return;
    }
    ll cnt = 0;
    set<ll> wow;
    vector<ll> ans;
    while(wow.size()!=1 && cnt<=40){
        ll x = *max_element(all(a))/2;
        ans.push_back(x);
        rep(i,0,n) a[i]=abs(a[i]-x);
        wow.clear();
        wow.insert(all(a));
        cnt++;
    }
    if(cnt>40){
        cout<<-1<<endl;
        return;
    }
    cnt++;
    ans.push_back(*wow.begin());
    cout<<cnt<<endl;
    rep(i,0,ans.size()){
        cout<<ans[i]<<" ";
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
