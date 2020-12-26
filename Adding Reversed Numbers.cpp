#include <bits/stdc++.h>
using namespace std;
int getdigits(int n)
{
    int c=1;
    while(n/10>0)
    {
        //cout<<c<<"-"<<n/10<<endl;
        c++;
        n=n/10;
    }
    return c;
}
int reversedigits(int n,int c)
{
    int x=0;
    while(n>0 && c>0)
    {
       x+=n%10*pow(10,c-1);
        n=n/10;
        c--;
    }
    return x;
}
void display(int n,int m)
{
    int c,c1,c2,rn,rm,sum,rsum;
    c1=getdigits(n);
    c2=getdigits(m);
    rn=reversedigits(n,c1);
    rm=reversedigits(m,c2);
    sum=rn+rm;
    c=getdigits(sum);
    rsum=reversedigits(sum,c);
    cout<<rsum;
}
int main() {
int t;
cin>>t;
for(int i=0;i<t;i++)
{
    int n,m;
    cin>>n>>m;
    display(n,m);
    cout<<endl;
}
return 0;
}
