#include <bits/stdc++.h>
#include<stack>
using namespace std;

int main()
{
    long long t;
    while(1)
    {
        scanf("%lld",&t);
        if(t==0)
            break;
        int a[t],s[t],i,j,f=0;
        for(i=0;i<t;i++)
        {
            scanf("%d",&a[i]);
        }
        for(i=0;i<t;i++)
        {
         s[a[i]-1] = i+1;
        }
        for(i=0;i<t;i++)
        {
            if(s[i]!=a[i])
                f=1;
        }
        if(f==0)
            cout<<"ambiguous"<<endl;
        else
            cout<<"not ambiguous"<<endl;
    }
    return 0;
}
