#include <bits/stdc++.h>
#include<stack>
using namespace std;
string calc(int x)
{
    if(x==1)
        return "1/1";
    else if (x==2)
        return "1/2";
    else
    {
    int a=1,b=2;
    while(x-2!=0)
    {
        if(a==1)
        {
            while(b!=1)
            {
                a++;b--;x--;
                if(x-2==0)
                {
                    string temp = "/";
                   return to_string(a) + temp + to_string(b);
                }
            }
            a++;x--;
            if(x-2==0)
                {
                    string temp = "/";
                   return to_string(a) + temp + to_string(b);
                }
        }
        else{
            while(a!=1)
            {
                b++;a--;x--;
                if(x-2==0)
                {
                    string temp = "/";
                   return to_string(a) + temp + to_string(b);
                }
            }
            b++;x--;
            if(x-2==0)
                {
                    string temp = "/";
                   return to_string(a) + temp + to_string(b);
                }
        }
    }
                    string temp = "/";
                    a==1?b--:a--;
                   return to_string(a) + temp + to_string(b);
    }

}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x;
        cin>>x;
        string res;
        res = calc(x);
        cout<<"TERM "<<x<<" IS "<<res<<endl;
    }
    return 0;
}
