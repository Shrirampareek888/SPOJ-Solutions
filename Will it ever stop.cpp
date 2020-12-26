#include <bits/stdc++.h>
#include<stack>
using namespace std;
int main()
{
   unsigned long long x;
   int f=0;
   cin>>x;
      while(x>1)
      {
          if(x%2==0)
            x=x/2;
          else{
                f=1;
                break;
          }
      }
      if(f==1)
        cout<<"NIE"<<endl;
      else
        cout<<"TAK"<<endl;
    return 0;
}
