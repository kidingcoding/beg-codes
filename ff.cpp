#include<iostream>

using namespace std;
int ch(string a[],int n)
{
    stack<string> s;
    for(int i=0;i<n;i++)
    {
        if(s.empty())
            s.push(a[i]);
        else {if(s.top()==a[i])
           s.pop();
        else s.push(a[i]);
    }}
    return s.size();
}
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s[n];
        for(int i=0;i<n;i++)
        {
            cin>>s[i];
        }
        cout<<ch(s,n)<<endl;
    }
}
