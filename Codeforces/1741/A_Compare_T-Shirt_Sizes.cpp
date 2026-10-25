// Codeforces: https://codeforces.com/contest/1741/A
// Problem: Compare T-Shirt Sizes
// Submission: https://codeforces.com/contest/1741/submission/303475477
// Language: C++17 (GCC 7-32)
// Submitted: 2025-01-29T08:10:41.000Z
// Rating: 800
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
    string a,b;
    cin>>a>>b;

    char ba = a.back();
    char bb = b.back();
    ll xcnta = count(all(a),'X');
    ll xcntb = count(all(b),'X');
    if(ba =='S' && bb=='S'){
        if(xcnta==xcntb) cout<<'='<<endl;
        else if(xcnta>xcntb) cout<<'<'<<endl;
        else cout<<'>'<<endl;
        return;
    }

    if(ba =='L' && bb=='L'){
        if(xcnta==xcntb) cout<<'='<<endl;
        else if(xcnta>xcntb) cout<<'>'<<endl;
        else cout<<'<'<<endl;
        return;
    }

    if((ba=='S'&&bb=='L')||(ba=='S'&&bb=='M')||(ba=='M'&&bb=='L')){
        cout<<'<'<<endl;
        return;
    }

    if(ba=='M' && bb=='M'){
        cout<<'='<<endl;
        return;
    }

    // if((ba=='L'&&bb=='S')||(ba=='M'&&bb=='S')||(ba=='L'&&bb=='M')){
    //     cout<<'>'<<endl;
    //     return;
    // }
    cout<<'>'<<endl;

}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll t=1;
    cin>>t;
    while(t--) forrealtho();
    return 0;
}
