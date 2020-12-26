#include <bits/stdc++.h>
using namespace std;
long long tc[10005];
long long calc(vector<long long> a,int i)
{
    if(i>=a.size())
    {
        return 0;
    }
    long long p;
    if(tc[i+1]==-1 || tc[i+2]==-1)
    {
        if(tc[i+1]==-1)
        tc[i+1]=calc(a,i+1);
        if(tc[i+2]==-1)
        tc[i+2]=calc(a,i+2);
         p = max(tc[i+1], a[i] + tc[i+2]);
    }
    else
    {
         p = max(tc[i+1], a[i] + tc[i+2]);
    }
    return p;
}
int main()
{
    int t,cnt=1;
    cin>>t;
    while(t--)
    {
        memset(tc,-1,sizeof(tc));
        int n;
        cin>>n;
        vector<long long> a;
        for(int i=0;i<n;i++)
        {
            long long x;
            cin>>x;
            a.push_back(x);
        }
        long long ans,r=0;
        ans=calc(a,r);
        cout<<"Case "<<cnt<<": "<<endl;
        cout<<ans<<endl;
        cnt++;
    }
   return 0;
}
