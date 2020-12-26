#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,d,i,f=0;
        cin>>n>>m>>d;
        vector<int> s;
        for(i=0;i<n;i++)
        {
            int x;
            cin>>x;
            s.push_back(x);
        }
        sort(s.begin(),s.end(),greater<int>());
        while(m!=0)
        {
            if(s[0]-d<=0)
            {
                f=1;
                break;
            }
            else{
                s[0]-=d;
                sort(s.begin(),s.end(),greater<int>());
            }
            m--;
        }
        if(f==0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
