#include<bits/stdc++.h>
using namespace std;
int maxi=0;
int maxcalc(vector <int> a,int j,int k)
{
    int maxm=0,mi=0;
    for(int i=j;i<j+k;i++)
    {
        if(a[i]>maxm)
        {
             maxm=a[i];
             mi=i;
        }

    }
    maxi=mi;
    return maxm;
}
int main()
{
	int n,k,i,maxm=0;
	cin>>n;
	vector<int> a;
	for(i=0;i<n;i++)
    {
        int x;
        cin>>x;
        a.push_back(x);
    }
    cin>>k;
    maxm=maxcalc(a,0,k);
    cout<<maxm<<" ";
    for(i=1;i+k-1<n;i++)
    {
        //cout<<"comp "<<a[i+k-1]<<" ";
        if(a[i+k-1]<maxm && maxi>=i)
        {
            cout<<maxm<<" ";
            continue;
        }
        else if(a[i+k-1]>=maxm && maxi>=i)
        {
            maxm=a[i+k-1];maxi=i+k-1;
        }
        else{
            maxm=maxcalc(a,i,k);
        }
        cout<<maxm<<" ";
    }
	return 0;
}
