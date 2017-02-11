#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
  cout<<"enter the sum of coin";
  cin>>n;
  cout<<"enter the numbers of denomination available"<<endl;
  vector<int> vect;
  int c;
   cin>>c;
  while(c>0)
  {
vect.push_back(c);
    cin>>c;
  }
  vector<int>::iterator v=vect.begin();
  int countt=0;
  while(v!=vect.end())
  {
   countt++;
   v++;

  }
  cout<<countt<<endl;


int array[countt][n+1]={};
for(int i=0;i<countt;i++)
{
    for(int j=1;j<=n;j++)
    {
       if(i==0&&j<vect[i])
       {
        array[i][j]=0 ;
        cout<<array[i][j]<<" ";
       }
       if(i==0&&j>=vect[i])
       {
        array[i][j]=1+array[i][j-vect[i]];
        cout<<array[i][j]<<" ";
       }
       if(i>0&&vect[i]>j)
       {
           array[i][j]=array[i-1][j];
           cout<<array[i][j]<<" ";
       }
       if(i>0&&vect[i]<=j)
       {

           array[i][j]=min(array[i-1][j],1+array[i][j-vect[i]]);
           cout<<array[i][j]<<" ";
       }
       }
       cout<<endl;


}
cout<<array[countt-1][n];

return 0;
}
