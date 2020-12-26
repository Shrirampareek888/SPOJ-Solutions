#include<bits/stdc++.h>
using namespace std;
int main()
{
        while(1)
        {
            int n,tp=0,f=0,j=0,i=1;
            cin>>n;
            if(n==-1)
                break;
           while(n>=tp)
           {
               tp=6*j+1;
               if(tp==n)
               {
                   f=1;
                   break;
               }
               j+=i;
               i++;
           }
           if(f==1)
            cout<<"Y"<<endl;
           else
            cout<<"N"<<endl;
        }

}
