
#include<bits/stdc++.h>
using namespace std;

string a,b,c(256,0);
int n,i,j,al,bl,y;

int main()
{
cin>>a;for(char i:a)c[i]=1;
cin>>a;al=a.size();
cin>>n;

while(n--)
{
cin>>b;bl=b.size();y=1;
for(i=j=0;y&&i<al;i++)
{
if(a[i]=='*')
{
while(j<bl-(al-i-1))
if(c[b[j++]])y=0;
}
else 
{
if(a[i]=='?'? c[b[j]]: a[i]==b[j])
j<bl? j++: y=0;
else 
y=0;
}
}
if(j<bl)y=0;
cout<<(y?"YES\n":"NO\n");
}
}
