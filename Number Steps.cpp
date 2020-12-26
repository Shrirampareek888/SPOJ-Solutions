#include <bits/stdc++.h>
using namespace std;
int main() {
int t,i;
cin>>t;
for(i=0;i<t;i++)
{
    int x,y;
    cin>>x>>y;
    if(x==y || x==y+2)
    {
        if(x%2!=0)
        {
            cout<<x+y-1<<endl;
        }
        else{
            cout<<x+y<<endl;
        }
    }
    else{
        cout<<"No Number"<<endl;
    }
}
return 0;
}
