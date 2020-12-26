#include <bits/stdc++.h>
using namespace std;
void display(int n,int m)
{
    for(int i=n;i<=m;i++)
    {
        if(i==1)
            continue;
        else if(i%2==0 && i!=2)
            continue;
        else if(i==2)
            cout<<"2"<<endl;
            else{
        int num=3,lmt=sqrt(i)+1,f=0;
        while(num<=lmt)
        {
            if(i%num==0)
                f=1;
            num+=2;
        }
        if(f==0)
            cout<<i<<endl;
            }
    }
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
