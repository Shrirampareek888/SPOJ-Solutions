#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<int> s1,s2;
	int t;
	cin>>t;
	int q=t;
	while(t--)
    {
        int id;
        cin>>id;
        s1.insert(id);s2.insert(id);
        int i,p;
        cin>>p;
        for(i=0;i<p;i++)
        {
            int x;
            cin>>x;
            s2.insert(x);
        }
    }
    cout<<s2.size()-q<<endl;
	return 0;
}

