#include <bits/stdc++.h>
#include<stack>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       long long f3t,l3t,sum;
       cin>>f3t>>l3t>>sum;
       if(f3t==0 && l3t==0 && sum==0)
       {
           cout<<"0"<<endl;
       }
       long long n = (sum*2)/(f3t+l3t);
       long long d = (l3t-f3t)/(n-5);
       long long a = f3t-2*d;
       cout<<n<<endl;
       for(int i=0;i<n;i++)
       {
           cout<<a+i*d<<" ";
       }
       cout<<endl;
    }
    return 0;
}
