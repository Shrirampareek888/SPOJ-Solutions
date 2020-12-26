#include<bits/stdc++.h>
using namespace std;
int main()
{
      int n,lmt,i,sum=0,maxs=0,j=0;
      cin>>n>>lmt;
      vector<int> a;
      for(i=0;i<n;i++)
      {
          int x;
          cin>>x;
          a.push_back(x);
      }
      i=0;
      while(i<n)
      {
          if(sum+a[i]<=lmt)
          {
              sum+=a[i];
              i++;
              if(sum>maxs)
                    maxs=sum;
          }
            else{
                sum-=a[j];
                j++;
            }

      }
      cout<<maxs;
}
