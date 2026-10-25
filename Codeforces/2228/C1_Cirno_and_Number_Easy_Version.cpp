// Codeforces: https://codeforces.com/contest/2228/C1
// Problem: Cirno and Number (Easy Version)
// Submission: https://codeforces.com/contest/2228/submission/375075027
// Language: C++17 (GCC 7-32)
// Submitted: 2026-05-18T14:27:21.000Z
// Rating: 1500
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

ll maxnumlessthana(ll a,ll d1, ll d2){
    string s = to_string(a);
    char x1 = d1+'0', x2 = d2+'0';

    ll n = s.length();
    string ans = "";
    rep(i,0,n){
        if(s[i]==x1) {
            ans+=x1;
        }
        else if(s[i]==x2) {
            ans+=x2;
        }
        else if(s[i]>x1 && s[i]<x2) {
            ans+=x1;
            while (++i < n) ans += x2;
            return stoll(ans);
        }
        else if(s[i]>x2) {
            ans+=x2;
            while (++i < n) ans += x2;
            return stoll(ans);
        }
        else{
            while(ans.length()>0 && ans.back()==x1){
                ans.pop_back();
            }
            if(ans.empty()){
                if(x2=='0') return -1;
                string temp(n-1,x2);
                if(temp.empty()) return -1;
                return stoll(temp);
            }
            ans.back()=x1;
            while(ans.length()<n) ans+=x2;
            return stoll(ans);
        }
    }
    return stoll(ans);
}

ll minnumjustgreaterthana(ll a, ll d1, ll d2){
    string s = to_string(a);
    char x1 = d1+'0', x2 = d2+'0';

    ll n = s.length();
    string ans = "";
    rep(i,0,n){
        if(s[i]==x1) {
            ans+=x1;
        }
        else if(s[i]==x2) {
            ans+=x2;    
        }
        else if(s[i]>x1 && s[i]<x2) {
            ans+=x2;
            while (++i < n) ans += x1;
            return stoll(ans);
        }
        else if(s[i]<x1) {
            ans+=x1;
            while (++i < n) ans += x1;
            return stoll(ans);
        }
        else{
            while(ans.length()>0 && ans.back()==x2){
                ans.pop_back();
            }
            if(ans.empty()){
                if(x1=='0'){
                    string temp ="";
                    temp+=x2;
                    while(temp.length()<n+1){
                        temp+=x1;
                    }
                    return stoll(temp);
                }else{
                    return stoll(string(n+1,x1));
                }
            }
            ans.back()=x2;
            while(ans.length()<n) ans+=x1;
            return stoll(ans);
        }
    }

    return stoll(ans);
}



void forrealtho()
{
    ll a,n; cin>>a>>n;
    ll d1, d2; cin>>d1>>d2;
    if(a==d1 || a==d2){
        cout<<0<<endl;
        return; 
    }
    ll n1 = maxnumlessthana(a,d1,d2);
    ll n2 = minnumjustgreaterthana(a,d1,d2);

    ll dif1 = (n1==-1)?LLONG_MAX:abs(a-n1);
    ll dif2 = abs(a-n2);

    cout<<min(dif1,dif2)<<endl;

}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll t=1;
    cin>>t;
    while(t--) forrealtho();
    return 0;
}
