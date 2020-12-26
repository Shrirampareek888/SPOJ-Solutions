#include <bits/stdc++.h>
#include<stack>
using namespace std;
int main()
{
    while(1)
    {
        stack<int> s;
        int n;
        cin>>n;
        if(n==0)
            break;
        vector<int>sorted,real,res;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            real.push_back(x);
            sorted.push_back(x);
        }
        sort(sorted.begin(),sorted.end());
        s.push(real[0]);int i=0;int j;
        j=1;
        while(i<sorted.size())
        {
           //cout<<sorted[i]<<" is at sorted| "<<real[j]<<" is at real|  "<<endl;
            if(sorted[i]==real[j] && j<real.size())
            {
                res.push_back(sorted[i]);
                i++;j++;
            }
            else if(!s.empty() && sorted[i]==s.top())
            {
                res.push_back(s.top());
                s.pop();
                i++;
            }
            else{
                if(j>real.size()-1)
                    break;
                s.push(real[j]);
                j++;
            }
        }
        int f=0;
        for(i=0;i<sorted.size();i++)
        {
            if(res[i]!=sorted[i])
                f=1;
        }
        if(f==0)
            cout<<"yes"<<endl;
        else
            cout<<"no"<<endl;
    }
    return 0;
}
