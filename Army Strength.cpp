#include <bits/stdc++.h>
#include<stack>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int ngn,nmn;
     cin>>ngn>>nmn;
     int i=0,j=0;
     vector<int> ng,nm;
    for(i=0;i<ngn;i++)
    {
        int x;
        cin>>x;
        ng.push_back(x);
    }
    for(i=0;i<nmn;i++)
    {
        int x;cin>>x;nm.push_back(x);
    }
    i=0;j=0;
    sort(ng.begin(),ng.end());
    sort(nm.begin(),nm.end());
    while(i<=ng.size()-1 && j<=nm.size()-1)
    {
        if(ng[i]==nm[j])
        {
            j++;
        }
        else if(ng[i]<nm[j])
        {
            i++;
        }
        else if(nm[j]<ng[i])
        {
            j++;
        }
    }
    if(j==nm.size() && i!=ng.size())
    {
        cout<<"Godzilla"<<endl;
    }
    else if(j!=nm.size() && i==ng.size())
    {
        cout<<"MechaGodzilla"<<endl;
    }
    else if(j==nm.size() && i==ng.size())
    {
        cout<<"uncertain"<<endl;
    }
    }
    return 0;
}
