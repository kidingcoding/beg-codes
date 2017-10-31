#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
int a[n];
stack <int> st;
stack <int> re;
cout<<"perform the operation";
for(int i=0;i<n;i++){
cin>>a[i];
st.push(a[i]);
}int c;
do{
cout<<"press 1 for undo 2 for redo";
cin>>c;
if(c==1)
{re.push(st.top());
st.pop();
cout<<"current task"<<st.top();
}
else if(c==2)
{cout<<"redo task is "<<re.top();
st.push(re.top());
re.pop();

}
}while((c==1)||(c==2));

}
