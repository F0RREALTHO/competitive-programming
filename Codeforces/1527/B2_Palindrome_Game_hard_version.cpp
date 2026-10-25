// Codeforces: https://codeforces.com/contest/1527/B2
// Problem: Palindrome Game (hard version)
// Submission: https://codeforces.com/contest/1527/submission/361818215
// Language: C++17 (GCC 7-32)
// Submitted: 2026-02-07T09:31:48.000Z
// Rating: 1900
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
    string s; cin>>s;

    ll cnt0 = 0, cnt1= 0;
    rep(i,0,n){if(s[i]=='0') cnt0++;}

    bool pal = true;

    rep(i,0,n/2){
        if(s[i]!=s[n-i-1]) pal = false;
        if((s[i]=='1' || s[n-i-1]=='1') && s[i]!=s[n-i-1]){cnt1++;}
    }

    if(pal){
        if(cnt0==1){cout<<"BOB"<<endl; return;}
        if(cnt0&1){cout<<"ALICE"<<endl; return;}
        cout<<"BOB"<<endl;
        return;
    }
    if(cnt0==2 && cnt1==1){cout<<"DRAW"<<endl;return;}
    cout<<"ALICE"<<endl;
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll t=1;
    cin>>t;
    while(t--) forrealtho();
    return 0;
}
