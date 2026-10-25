// Codeforces: https://codeforces.com/contest/1845/A
// Problem: Forbidden Integer
// Submission: https://codeforces.com/contest/1845/submission/277535456
// Language: C++17 (GCC 7-32)
// Submitted: 2024-08-21T14:05:08.000Z
// Rating: 800
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    for (int i = 0; i < t; i++)
    {
        int n,k,x,count;
        cin>>n>>k>>x;

        count = 0;
        if (x==1 && k==1)
        {
            cout<<"NO"<<endl;
        }


        else if ((n%2)!=0 && k==2 && x==1)
        {
            cout<<"NO"<<endl;
        }


        else if (x!=1)
        {
            cout<<"YES"<<endl;
            cout<<n<<endl;
            for (int i = 0; i < n; i++)
            {
                cout<<1<<" ";
            }
            cout<<endl;
            
        }

        else if (n%2==0)
        {
            cout<<"YES"<<endl;
            cout<<n/2<<endl;
            for (int i = 0; i < n/2; i++)
            {
                cout<<2<<" ";
            }
            cout<<endl;
        }

        else if (n%(2)!=0 && k>=3)
        {
            cout<<"YES"<<endl;
            cout<<n/2<<endl;
            for (int i = 0; i < n/2-1; i++)
            {
                cout<<(2)<<" ";
            }
            cout<<3<<endl;
        }
        
        
        else
        {
            cout<<"NO"<<endl;
        }
        
        
        
    }
    
}
