#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
int A[n+1];
A[1]=0;
for(int i=2;i<=n;i++)
{
    int r=1+A[i-1];
    if(i%2==0)
    r=min(r,1+A[i/2]);
    if(i%3==0)
        r=min(r,1+A[i/3]);
        A[i]=r;
}
cout<<A[n];
}
