#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    vector<long long > v;
    cin>>n;
    for(long long i=0;i<n;i++)
    {
        long long x;
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    for(long long i=0;i<n;i++)
    {
        if(v[i]!=v[i-1] && v[i]!=v[i+1])
        {
            cout<<v[i];
            break;
        }
    }
}
