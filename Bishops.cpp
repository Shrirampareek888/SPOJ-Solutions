#include <bits/stdc++.h>
using namespace std;
int main()
{
    while(1)
    {
        string s;
        getline(cin,s);

        if(s.empty())
            break;
       int i=s.length()-1;
       if(s=="0")
       {
           cout<<"0"<<endl;
           continue;
       }
       if(s=="1")
       {
           cout<<"1"<<endl;
           continue;
       }
       while(s[i]<'1')
       {
           s[i] = (((s[i]-'0')+9)+'0');
           i--;
       }
       s[i] = ((s[i]-'0')-1)+'0';
       i=0;
       int carry=0;
       reverse(s.begin(),s.end());
       while(i<s.length())
       {
            char ch = (((carry +(s[i]-'0')*2 )%10) + '0');
           carry=(carry+((s[i]-'0')*2))/10;
           s[i]=ch;
           i++;
       }
       if(carry>0)
       {
          s=s+"1";
       }

        reverse(s.begin(),s.end());
       cout<<s<<endl;
    }
   return 0;
}
