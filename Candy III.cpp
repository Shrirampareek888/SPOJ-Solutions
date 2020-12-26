#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        long long sum=0;
        long long n;
        cin>>n;
        for(long long i=0;i<n;i++)
        {
            long long x;
            cin>>x;
            sum=(sum+x)%n;
        }
        sum==0?cout<<"YES":cout<<"NO";
        cout<<endl;
    }
    return 0;
}
