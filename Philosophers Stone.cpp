#include<bits/stdc++.h>
using namespace std;
int a[105][105];
int dp[105][105];
int calculate(int i,int j,int mrows,int mcols)
{
    if(j>=mcols || i>=mrows || j<0 || i< 0)
    {
        return 0;
    }
    if(dp[i+1][j]==-1)
        dp[i+1][j]=calculate(i+1,j,mrows,mcols);
    if(dp[i+1][j-1]==-1)
        dp[i+1][j-1]=calculate(i+1,j-1,mrows,mcols);
    if(dp[i+1][j+1]==-1)
        dp[i+1][j+1]=calculate(i+1,j+1,mrows,mcols);

    return a[i][j] + max(dp[i+1][j+1],max(dp[i+1][j],dp[i+1][j-1]));
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        memset(dp,-1,sizeof(dp));
        int mrows,mcols,i,j;
        cin>>mrows>>mcols;
        for(i=0;i<mrows;i++)
        {
            for(j=0;j<mcols;j++)
            {
                cin>>a[i][j];
            }
        }
        i=0;j=0;
        int maxi=0;
        for(j=0;j<mcols;j++)
       {
           if(dp[i][j]==-1)
            dp[i][j] = calculate(i,j,mrows,mcols);
            if(dp[i][j]>maxi)
              maxi=dp[i][j];
        }
        cout<<maxi<<endl;
        }

}

