// Codeforces: https://codeforces.com/contest/2174/A
// Problem: Needle in a Haystack
// Submission: https://codeforces.com/contest/2174/submission/356869510
// Language: C++17 (GCC 7-32)
// Submitted: 2026-01-07T18:13:44.000Z
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
    string s,t;
    cin>>s>>t;

    vector<ll> cntS(26,0), cntT(26,0);
    for(auto &c : s)cntS[c-'a']++;
    for(auto &c : t)cntT[c-'a']++;

    rep(i,0,26){
        if(cntS[i]>cntT[i]){
            cout<<"Impossible"<<endl;
            return;
        }
        cntT[i]-=cntS[i];
    }

    string tp = "";
    rep(i,0,26){
        while(cntT[i]--){
            tp += char('a' + i);
        }
    }

    string ans = "";
    ll i = 0, j = 0;

    while(i<s.size() && j<tp.size()){
        if(s[i]<tp[j]){
            ans+=s[i++];
        }
        else if(s[i]>tp[j]){
            ans+=tp[j++];
        }
        else{
            ans+=s[i++];
        }
    }

    while(i < s.size()) ans+=s[i++];
    while(j < tp.size()) ans+=tp[j++];

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
