#include <bits/stdc++.h>
#include<stack>
using namespace std;
void functioncall(long long n)
{
    long long res=0;
    stack <long long> s;
    s.push(n);
    while(!s.empty())
        {
            long long x = s.top();
            s.pop();
            long long a,b,c;
            a=x/2;b=x/3;c=x/4;
            if(a+b+c>x)
            {
                s.push(a);s.push(b);s.push(c);
            }
            else{
                res+=x;
            }
        }
        cout<<res<<endl;
}
int main() {
    int t=10;
    long long prev =-1;
    while(t--)
    {
        long long n;
        cin>>n;
        if(n==prev)
        break;
        prev=n;
        functioncall(n);
    }
return 0;
}
