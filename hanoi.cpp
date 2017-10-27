#include<iostream>
using namespace std;
void hanoi(int t,string a,string c,string b)
{
if(t==1)
{cout<<"disk moved from "<<a<<" to "<<b;
return ;
}
hanoi(t-1,a,b,c);
hanoi(1,a,c,b);
hanoi(t-1,c,a,b);
}
int main()
{
int t;
cin>>t;
hanoi(t,"a","b","c");
}
