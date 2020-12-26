#include <bits/stdc++.h>
#include<stack>
using namespace std;
int main() {
int n,x=1,sum=0;
cin>>n;
while(n/x-(x-1)>=1)
{
    sum+=n/x-(x-1);
    x++;
}
cout<<sum<<endl;
return 0;
}
