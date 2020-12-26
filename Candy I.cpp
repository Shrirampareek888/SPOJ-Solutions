#include <bits/stdc++.h>
using namespace std;
int main() {

    int n;
    while(n!=-1)
    {
        cin>>n;
        if(n==-1)
            break;
        vector<int> a;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            a.push_back(x);
        }
        sort(a.begin(),a.end());
        int cont=0;int temp = a[0];
        for(int i=0;i<a.size();i++)
        {
            a[i]-=temp;
            cont+=a[i];
        }
        if(cont%n!=0)
        {
            cout<<"-1"<<endl;
        }
        else{
            int i=0,c=0;
            while(a[i]<cont/n)
            {
                c+=cont/n - a[i];
                i++;
            }
            cout<<c<<endl;
        }
    }
return 0;
}
