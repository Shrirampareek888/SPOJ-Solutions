#include<bits/stdc++.h>
using namespace std;
long long calculate(long long res,long long no,char prev)
{
    if(prev=='+')
        return res+no;
    if(prev=='-')
        return res-no;
    if(prev=='*')
        return res*no;
    if(prev=='/')
        return round(res/no);
}
int main()
{
	int t;
	cin>>t;
	while(t--)
    {
     long long res=0;
     char op='+',prev='+';
     while(op!='=')
     {
         long long no;
         cin>>no;
         cin>>op;
         res=calculate(res,no,prev);
         if(op=='=')
            break;
         prev=op;
     }
     cout<<res<<endl;
    }
	return 0;
}
