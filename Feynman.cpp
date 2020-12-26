#include <bits/stdc++.h>
using namespace std;
int main() {

    int x=1;
    while(x!=0)
    {
    cin>>x;
    if(x==0)
        break;
    int sum=0;
    for(int j=x;j>=1;j--)
    {
        sum+=j*j;
    }
    cout<<sum<<endl;
    }
return 0;
}
