#include <bits/stdc++.h>
using namespace std;
void calc(long long n,long long mem,int c)
{
    if(n==1)
    {
        printf("%d",c);
        exit(0);
    }
    else if (n<9 || (n==mem && c!=1))
    {
        printf("-1");
        exit(0);
    }
    unsigned long long x=0;
    while(n>0)
    {
        x+= (n%10)*(n%10);
        n=n/10;
    }
    n=x;c++;
    calc(n,mem,c);
    return;

}
int main()
{
    long long n,x=0,mem;
    int c=1;
    scanf("%lld",&n);
    while(n>0)
    {
        x+= (n%10)*(n%10);
        n=n/10;
    }
    n=x;mem=x;
    calc(n,mem,c);
    return 0;
}
