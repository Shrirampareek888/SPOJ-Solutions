#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,hf=0,tr=0,on=0,ans=0;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        if(s=="3/4")
            tr++;
        if(s=="1/4")
            on++;
        if(s=="1/2")
            hf++;
    }
    ans = 1 + ceil((float)hf/2) + tr;
    if(on>tr)
    {
        on=on-tr;
        if(hf%2!=0)
        {
            on=on-2;
        }
        if(on>0)
        {
        on = ceil((float)on/4);
        ans+=on;
        }
    }
    cout<<ans<<endl;
    return 0;
}
