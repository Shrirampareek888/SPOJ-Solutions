#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[3000];
    memset(a,0,sizeof(a));
    set <int> res;
    vector<int> ans;
    int i=2;
    for(i=2;i<3000;i++)
    {
        if(a[i]==0)
        {
            a[i]=1;
        for(int j=i*2;j<3000;j+=i)
        {
            a[j]-=1;
            if(a[j]<=-3)
                res.insert(j);
        }
        }

    }
    for(auto it = res.begin();it!=res.end();it++)
    {
        ans.push_back(*it);
    }
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        cout<<ans[n-1]<<endl;
    }
    return 0;
}
