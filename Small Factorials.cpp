#include <bits/stdc++.h>
using namespace std;
int carry=0,f=0;
vector<int> no;
void fact(int n,vector <int> no)
{
    if(n==1)
    {
        for(int i=no.size()-1;i>=0;i--)
            cout<<no[i];
        no.clear();carry=0;f=1;
        return;
    }
    if(no.size()==0)
    {
        int x=n;
    while(n>0)
    {
        no.push_back(n%10);
        n=n/10;
    }
    fact(x-1,no);
    if(f==1)
        return;
    }
    for(int i=0;i<no.size();i++)
        {
            int temp=no[i]*n+carry;
            no[i]=temp%10;
            carry=temp/10;
        }
        while(carry>0)
        {
            no.push_back(carry%10);
            carry=carry/10;
        }
        carry=0;
    fact(n-1,no);
    if(f==1)
        return;
}
int main() {
int t,i;
cin>>t;
for(i=0;i<t;i++)
{
    int n;
    cin>>n;
    if(n==1)
        cout<<"1";
    else
    fact(n,no);
    cout<<endl;
}
return 0;
}
