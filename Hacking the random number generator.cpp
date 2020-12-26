#include<bits/stdc++.h>
using namespace std;
int main()
{
      int n,d,c=0,i,j;
      cin>>n>>d;
      vector<int> a;
      for(i=0;i<n;i++)
      {
          int x;
          cin>>x;
          a.push_back(x);
      }
      sort(a.begin(),a.end());
      for(i=0;i<n-1;i++)
      {
          for(j=i+1;j<n;j++)
          {
              if(a[j]-a[i]>d)
                break;
              if(a[j]-a[i]==d)
                c++;
          }
      }
      cout<<c<<endl;


}
