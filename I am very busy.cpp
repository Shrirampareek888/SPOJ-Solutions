#include<bits/stdc++.h>
using namespace std;
struct numbers{
int lwr;
int upr;
};
bool cmp(numbers a,numbers b)
{
    return (a.upr == b.upr) ? a.lwr < b.lwr : a.upr < b.upr;

}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j,max=0;
        cin>>n;
        numbers a[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i].lwr>>a[i].upr;
        }
        sort(a,a+n,cmp);int last=-1;
        for(i=0;i<n;i++)
        {
            if(a[i].lwr>=last)
            {
                max++;
                last=a[i].upr;
            }
        }
        cout<<max<<endl;

    }
    return 0;
}
