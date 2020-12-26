#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n1,n2,i,j,mindf=999999;
        cin>>n1;
        set<int> s1,s2;
        for(i=0;i<n1;i++)
        {
            int x;
            cin>>x;
            s1.insert(x);
        }
        cin>>n2;
        for(i=0;i<n2;i++)
        {
            int x;
            cin>>x;
            s2.insert(x);
        }
        for(auto i=s1.begin();i!=s1.end();i++)
        {
            for(auto j=s2.begin();j!=s2.end();j++)
            {
                if(abs(*i-*j)<mindf)
                    mindf=abs(*i-*j);
            }
        }
        cout<<mindf<<endl;
    }
}
