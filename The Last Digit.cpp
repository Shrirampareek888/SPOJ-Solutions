#include <bits/stdc++.h>
#include<stack>
using namespace std;
int main() {
int t;
cin>>t;
while(t--)
{
    int a,b;
    cin>>a>>b;
    if(a==0)
    {
        cout<<"0"<<endl;
    }
    else if(b==0)
    {
        cout<<"1"<<endl;
    }
    else if(b==1)
    {
        cout<<a%10<<endl;
    }
    else{
            int i=2;
        while((int)pow(a,i)%10!=a%10)
        {
            i++;
        }
        i--;
        while(b>i)
        {
            b-=i;
        }
        int x = pow(a,b);
        cout<<x%10<<endl;
    }
}
}
