#include<iostream>
using namespace std;
int main()
{
int t,c=0;
cin>>t;
if(t==1)
    cout<<"2"<<endl;
else if(t==2)
    cout<<"3"<<endl;
else{

t=t-2;
if(t%2)
{t=t/2;
    cout<<6*(t+1)-1<<endl;
}
else cout<<6*(t/2)+1<<endl;
}}
