#include <bits/stdc++.h>
using namespace std;
int main() {

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> a;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            a.push_back(x);
        }
        vector<int> b;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            b.push_back(x);
        }
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        int sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=a[i]*b[i];
        }
        cout<<sum<<endl;
    }
return 0;
}
