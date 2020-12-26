#include <bits/stdc++.h>
using namespace std;

int main()
{
    while(1)
    {
        int g,b,maxm,minm;
        cin>>g>>b;
        if(g==-1 && b==-1)
            break;
        if(g>b)
        {
            maxm=g;minm=b;
        }
        else{
            maxm=b;minm=g;
        }
        float k = (float)maxm/(minm+1);
        int val = ceil(k);
        cout<<val<<endl;

    }
}
