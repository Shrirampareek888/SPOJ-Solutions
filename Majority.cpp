#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
      int n,i;
      cin>>n;
      vector<int> a,res;
      for(i=0;i<n;i++)
      {
          int x;
          cin>>x;
          a.push_back(x);
      }
      sort(a.begin(),a.end());
      int amt=a[a.size()-1]-a[0];
      int cnt[amt+1];
      memset(cnt,0,sizeof(cnt));
      for(i=0;i<a.size();i++)
      {
          cnt[a[i]-a[0]]++;
      }
      for(i=0;i<amt+1;i++)
      {
          if(cnt[i]>n/2)
            res.push_back(i+a[0]);
      }
      if(res.size()==0)
      {
          cout<<"NO"<<endl;
          continue;
      }
      else{
            cout<<"YES";
        for(i=0;i<res.size();i++)
        {
            cout<<" "<<res[i];
        }
      cout<<endl;
      }

    }
}
