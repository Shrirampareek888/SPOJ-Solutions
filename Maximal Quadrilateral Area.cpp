#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        double a,b,c,d;
        cin>>a>>b>>c>>d;
        double s =(double)(a+b+c+d)/2;
        a=s-a;b=s-b;c=s-c;d=s-d;
        double res = double(a*b*c*d);
        res = (double)sqrt(res);
        cout<<fixed<<setprecision(2)<<(double)res<<endl;
    }
    return 0;
}
