#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
     int n;
     cin>>n;
     string temp;
     getline(cin,temp);
     vector<string> s;
     for(int i=0;i<n;i++)
     {
         string t;
         getline(cin,t);
         s.push_back(t);
     }
     sort(s.begin(),s.end());
     for(int i=0;i<n;i++)
     {
         int c=0,j=i;
         while(s[j]==s[j+1] && j+1<n)
         {
             c++;
             j++;
         }
        cout<<s[j]<<" "<<c+1<<endl;
        i=j;
     }
     cout<<endl;
    }
    return 0;
}
