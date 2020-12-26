#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
      string s;
      cin>>s;
      if(s.length()%2==0)
      {
          string t = s.substr(0,s.length()/2);
          string p = s.substr(s.length()/2,s.length());
          reverse(p.begin(),p.end());
          if(p==t)
            cout<<"YES"<<endl;
          else
            cout<<"NO"<<endl;
      }
      else{
            string t = s.substr(0,s.length()/2);
            string p = s.substr(s.length()/2+1,s.length());
            reverse(p.begin(),p.end());
          if(p==t)
            cout<<"YES"<<endl;
          else
            cout<<"NO"<<endl;
      }

    }
}
