#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    const long long mod = 1000007;
    while(t--)
    {
        long long n,val,final;
        cin>>n;
        val= (3*n+1)*n/2;
        final=val%mod;
        cout<<final<<endl;
        }
    return 0;
}
