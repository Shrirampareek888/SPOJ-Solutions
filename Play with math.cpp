#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        unsigned long long a,b;
        cin>>a>>b;
        int gf =__gcd(a,b);
        a/=gf;
        b/=gf;
        cout<<b<<" "<<a<<endl;

    }
    return 0;
}
