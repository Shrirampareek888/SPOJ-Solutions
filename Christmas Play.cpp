#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
    {
     long long n,k,i;
     long long m=999999999;
     cin>>n>>k;
     vector<long long> a;
     for(i=0;i<n;i++)
     {
         long long x;
         cin>>x;
         a.push_back(x);
     }
     sort(a.begin(),a.end());
    for(i=0;i+k<=a.size();i++)
    {
        if(a[i+k-1]-a[i]<m)
            m=a[i+k-1]-a[i];
    }
    cout<<m<<endl;
    }
	return 0;
}
