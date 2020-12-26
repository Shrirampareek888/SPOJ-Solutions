#include <bits/stdc++.h>
#include<stack>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int p=1;p<=t;p++){
        long long n;
        long long req;
        cin>>req>>n;
        vector<int> arr;
        for(int j=0;j<n;j++)
        {
            int x;
            cin>>x;
            arr.push_back(x);
        }
        long long i = arr.size()-1,sum=0,c=0;
        sort(arr.begin(),arr.end());
        while(sum<req && i>=0)
        {
            sum+=arr[i];
            c++;i--;
        }
        if(i<0 && sum<req)
        {
            cout<<"Scenario #"<<p<<":"<<endl<<"impossible"<<endl<<endl;
            continue;
        }
        else{
            cout<<"Scenario #"<<p<<":"<<endl<<c<<endl<<endl;
            continue;
        }
    }
    return 0;
}
