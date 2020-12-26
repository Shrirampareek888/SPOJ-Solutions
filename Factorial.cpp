#include <bits/stdc++.h>
using namespace std;
int main() {
int t,i;
cin>>t;
for(i=0;i<t;i++)
{
    int n;
    cin>>n;
    int x=1,sum=0;
    while(pow(5,x)<=n)
    {
        sum+=n/pow(5,x);
        x++;
    }
    cout<<sum<<endl;
}
return 0;
}
