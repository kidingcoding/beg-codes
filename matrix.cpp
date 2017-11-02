#include<iostream>
using namespace std;int a[10][10];
int f(int i,int j,int n,int m)
{
    if(i<0||i>=n||j<0||j>=m||a[i][j]==-1||a[i][j]==1)
        return 0;
    else{a[i][j]=1;
            return 1+f(i+1,j,n,m)+f(i-1,j,n,m)+f(i,j+1,n,m)+f(i,j-1,n,m)+f(i+1,j+1,n,m)+f(i-1,j-1,n,m)+f(i-1,j+1,n,m)+f(i+1,j-1,n,m);
}}
int main()
{

      int n,m;
      cin>>n>>m;

for(int i=0;i<n;i++)
{
    for(int j=0;j<m;j++)
     {int x;
     cin>>x;
     if(x==0)
a[i][j]=-1;
else a[i][j]=0;
}}int p=0;
for(int i=0;i<n;i++)
{
    for(int j=0;j<m;j++)
    {
        if(a[i][j]==0)
            p=max(p,f(i,j,n,m));
    }
}
cout<<p<<endl;
}
