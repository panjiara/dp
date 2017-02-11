#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++)
    cin>>array[i];
    int result[n];
    for(int i=0;i<n;i++)
    result[i]=1;
    for(int i=1;i<n;i++)
    {
     for(int j=0;j<i;j++)
     {
           if(array[i]>array[j]&&result[j]+1>result[i])
           {
             result[i]=result[j]+1;
           }
      }
    }
    int maxx=0;
for(int k=0;k<n;k++)
{
  if(result[k]>maxx)
  maxx=result[k];


}
cout<<maxx<<endl;





 return 0;

}
