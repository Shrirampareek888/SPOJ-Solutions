#include <bits/stdc++.h>
#include<stack>
using namespace std;
void find(string no,string tot, int x)
{
    int total = stoi(tot);
    int num = stoi(no);
    int missing = total - num;
    string miss = to_string(missing);
    if(x==1)
    {
        cout<<miss<<" + "<<no<<" = "<<tot<<endl;
    }
    else{
        cout<<no<<" + "<<miss<<" = "<<tot<<endl;
    }
}
void findtot(string no1, string no2)
{
    int num1 = stoi(no1);
    int num2 = stoi(no2);
    int total = num1+num2;
    string tot = to_string(total);
    cout<<no1<<" + "<<no2<<" = "<<tot<<endl;
}
int main()
{
    int t;
    cin>>t;
    string emp;
    getline(cin,emp);
    while(t--)
    {
        string emp;
    getline(cin,emp);
      string s;
      getline(cin,s);
      int i=0,num=0;
      while(s[i]!=' ')
      {
          i++;
      }
      string no1 = s.substr(0,i);
      i+=3;
      int start= i;
      while(s[i]!=' ')
      {
          i++;
      }
      string no2 = s.substr(start,i-start);
      i+=3;
      string tot = s.substr(i,s.length()-1);
      int f=0;
        for(i=0;i<no1.length();i++)
        {
            if(no1[i]=='m')
            {
                int x = 1;
                f=1;
                find(no2,tot,x);
                break;
            }

        }
        if(f==1)
            continue;
        for(i=0;i<no2.length();i++)
        {
            if(no2[i]=='m')
            {
                f=1;
                int x=2;
                find(no1,tot,2);
                break;
            }

        }
         if(f==1)
            continue;
        for(i=0;i<tot.length();i++)
        {
            if(tot[i]=='m')
            {
                f=1;
                findtot(no1,no2);
                break;
            }

        }
         if(f==1)
            continue;
    }
    return 0;
}
