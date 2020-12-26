#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
    {
        int n,a[8],i;
        memset(a,0,sizeof(a));
        cin>>n;
        string s;
        cin>>s;
        cout<<n<<" ";
       // TTT, TTH, THT, THH, HTT, HTH, HHT and HHH.
       for(i=0;i<s.length()-2;i++)
       {
           string t = s.substr(i,3);
           if(t=="TTT")
           {
               a[0]++;
           }
           else if(t=="TTH")
           {
               a[1]++;
           }
           else if(t=="THT")
           {
               a[2]++;
           }
           else if(t=="THH")
           {
               a[3]++;
           }
           else if(t=="HTT")
           {
               a[4]++;
           }
           else if(t=="HTH")
           {
               a[5]++;
           }
           else if(t=="HHT")
           {
               a[6]++;
           }
           else if(t=="HHH")
           {
               a[7]++;
           }
       }
       for(i=0;i<8;i++)
       {
           cout<<a[i]<<" ";
       }
       cout<<endl;
    }
	return 0;
}
