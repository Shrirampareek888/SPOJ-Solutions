#include <bits/stdc++.h>
#include<stack>
using namespace std;

int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        long long ans =(n*(n+2)*(2*n+1))/8;
        cout<<ans<<endl;
        }
    return 0;
}
