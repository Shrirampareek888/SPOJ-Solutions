#include <bits/stdc++.h>
#include<stack>
using namespace std;
int main() {
int cols=1;
while(cols!=0)
{
    cin>>cols;
if(cols==0)
{
    break;
}
string s;
cin>>s;
int rows = ceil(s.length()/cols);
char mat[rows][cols];
int i=0;
for(int r=0;r<rows;r++)
{
    for(int c=0;c<cols;c++)
    {
        mat[r][c]=s[i];
        i++;
    }
}
for(int r=1;r<rows;r+=2)
{
    for(int c=0;c<cols/2;c++)
    {
        char temp = mat[r][c];
        mat[r][c]= mat[r][cols-1-c];
        mat[r][cols-1-c]=temp;
    }
}
for(int c=0;c<cols;c++)
{
    for(int r=0;r<rows;r++)
    {
        cout<<mat[r][c];
    }
}
cout<<endl;
}
}
