#include <bits/stdc++.h>
using namespace std;
int main() {

    int a,b,c,f=0;
    while(f==0)
    {
    cin>>a>>b>>c;
    if(a==0 && b==0 && c==0)
    {
    f=1;
    break;
    }
    if(c==2*b-a)
    {
        cout<<"AP "<< c + b-a<<endl;
    }
    else{
        cout<<"GP "<<c*b/a<<endl;
    }
    }
return 0;
}
