#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
    {
       string a;
       unsigned long long b;
       cin>>a>>b;
       int lastd = a[a.length()-1]-'0';
       if(b==0)
       {
           cout<<"1"<<endl;
       }
       else
       {
           int temp=b%4;
           if(temp==0)
           {
               temp=4;
           }
           int t=pow(lastd,temp);
          cout<<t%10<<endl;
       }
    }
	return 0;
}
