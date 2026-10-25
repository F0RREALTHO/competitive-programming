// Codeforces: https://codeforces.com/contest/1886/A
// Problem: Sum of Three
// Submission: https://codeforces.com/contest/1886/submission/277297701
// Language: C++17 (GCC 7-32)
// Submitted: 2024-08-20T11:08:07.000Z
// Rating: 800
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    for (int i = 0; i < t; i++)
    {
        int n;
        cin>>n;

        if (n<7)
        {   
            cout<<"NO"<<endl;
            continue;
        }
        int x=1,y=2,z=4;

        int delta = n-7;
        // cout<<delta<<endl;
        z +=delta;
        if (z%3==0||x==y||x==z||y==z)
        {
            y=4;
            z = n-(x+y);

            if (z%3==0||x==y||x==z||y==z)
            {   
                y = 4;
                x = n-(z+y);

                if (x%3==0 ||x==y||x==z||y==z)
                {
                    cout<<"NO"<<endl;
                }

                else
                {
                    cout<<"YES"<<endl;
                    cout<<x<<" "<<y<<" "<<z<<endl;
                }
                
                
            }

            else
            {
                cout<<"YES"<<endl;
                cout<<x<<" "<<y<<" "<<z<<endl;
            }
            
            
        }


        else
        {
            cout<<"YES"<<endl;
            cout<<x<<" "<<y<<" "<<z<<endl;
        }
                
    }
        
        

        
}
    
