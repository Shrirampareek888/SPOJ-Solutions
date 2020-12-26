#include<bits/stdc++.h>
using namespace std;
int main()
{
    while(1)
    {
        int n1,n2,i,j,ts1=0,ts2=0,res=0;
        cin>>n1;
        if(n1==0)
            break;
        vector<int> a,b,c;
        set <int> temp;
        for(i=0;i<n1;i++)
        {
            int x;
            cin>>x;
            a.push_back(x);
            temp.insert(x);
        }
        cin>>n2;
        for(i=0;i<n2;i++)
        {
            int x;
            cin>>x;
            b.push_back(x);
            int t = temp.size();
            temp.insert(x);
            if(t==temp.size())
            {
                c.push_back(x);
            }
        }
        i=a.size()-1;j=b.size()-1;
        int k = c.size()-1;
        while(i>=0 || j>=0)
        {
            ts1=0;ts2=0;
            while(i>=0 && (k<0 || a[i]!=c[k]))
            {
                ts1+=a[i];
                i--;
            }
            while(j>=0 && (k<0 || b[j]!=c[k]))
            {
                ts2+=b[j];
                j--;
            }
            ts1>ts2?res+=ts1:res+=ts2;
            k--;
        }
        cout<<res<<endl;
    }
    return 0;
}
