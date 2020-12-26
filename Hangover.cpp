#include <bits/stdc++.h>
using namespace std;
int main()
{
    while(1)
    {
        float req;
        float ter = 0.00;
        cin>>req;
        if(req==ter)
            break;
        int i=1;
        float act=(float)1/(1+i);
        while(req>act)
        {
            i++;
            act = act + (float)1/(1+i);
        }
        cout<<i<<" card(s)"<<endl;
    }
    return 0;
}
