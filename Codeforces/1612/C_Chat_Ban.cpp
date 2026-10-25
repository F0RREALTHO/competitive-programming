// Codeforces: https://codeforces.com/contest/1612/C
// Problem: Chat Ban
// Submission: https://codeforces.com/contest/1612/submission/291560830
// Language: C++17 (GCC 7-32)
// Submitted: 2024-11-15T10:32:56.000Z
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

    ll sum_of_first_n(ll n) {
        if (n <= 0) return 0;
        ll first = n / 2;
        ll second = (n + 1);
        if (n % 2 == 1) {
            first = (n + 1) / 2;
            second = n;
        }
        return first * second;
    }

    bool ban(ll mid, ll k, ll x) {
        if (mid <= k) {
            return sum_of_first_n(mid) >= x;
        }
        ll ascending = sum_of_first_n(k);
        ll decreasing_lines = mid - k;
        ll descending = sum_of_first_n(k - 1) - sum_of_first_n(k - 1 - decreasing_lines);
        if (ascending >= x) return true;
        x -= ascending;
        return descending >= x;
    }

    void forrealtho()
    {
        ll k ,x;
        cin>>k>>x;

        if(k*k <= x){
            cout << 2*k - 1 << endl;
            return;
        }

        ll low = 1 , high = 2*k -1 , ans = 0;
        while(low<=high){
            ll mid = low + (high - low)/2;
            if(ban(mid,k,x)){
            ans = mid;
            high = mid - 1;
            }
            else low = mid +1;
        }
        cout<< ans << endl;
    }

    int main()
    {
        ios_base::sync_with_stdio(false); cin.tie(NULL);
        ll t=1;
        cin>>t;
        while(t--) forrealtho();
        return 0;
    }
