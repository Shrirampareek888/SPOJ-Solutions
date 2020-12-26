#include <bits/stdc++.h>
using namespace std;
int main()

{
while(1)
{
int a,b,f=0;
cin>>a>>b;
if(a==0 && b==0)
    break;
vector<int> att,df;
for(int i=0;i<a;i++)
{
    int x;
    cin>>x;
    att.push_back(x);
}
for(int i=0;i<b;i++)
{
    int x;
    cin>>x;
    df.push_back(x);
}
sort(att.begin(),att.end());
sort(df.begin(),df.end());
for(int i=0;i<a;i++)
{
    if(att[i]<df[1])
    f=1;
}
if(f==1)
    cout<<"Y"<<endl;
else
    cout<<"N"<<endl;
}
   return 0;
}
