#include<iostream>
#include<string>
using namespace std;
int main()
{
string s="What is Lorem Ipsum? Lorem Ipsum is simply dummy text of the printing and typesetting industry. Lorem Ipsum has been the industry's standard dummy text ever since the 1500s, when an unknown printer took a galley of type and scrambled it to make a type specimen book. It has survived not only five centuries, but also the leap into electronic typesetting, remaining essentially unchanged. It was popularised in the 1960s with the release of Letraset sheets containing Lorem Ipsum passages, and more recently with desktop publishing software like Aldus PageMaker including versions of Lorem Ipsum.";

int l=s.length();
int su=0,e=0;
for(int i=0;i<l;i++)
{
    if(s[i]==' ')
        su++;
    else if(s[i]=='\n')
        e++;
}
cout<<"spaces"<<su;
cout<<"lines"<<e+1;
cout<<"words"<<su+1;
}
