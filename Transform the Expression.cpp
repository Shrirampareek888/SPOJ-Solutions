#include<bits/stdc++.h>
using namespace std;
void solve();
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}

void solve()
{
    string a;
    cin>>a;
    stack <char> s;
    for(int i=0;i<a.length();i++)
    {
        if(a[i]==')')
        {
            while(s.top()!='(')
            {
                cout<<s.top();
                s.pop();
            }
            s.pop();
        }
        else if(a[i]>='a' && a[i]<='z')
        {
            cout<<a[i];
        }
        else{
            s.push(a[i]);
        }

    }
    cout<<endl;
}
