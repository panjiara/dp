#include<bits/stdc++.h>
using namespace std;
int I,J,n;
int check(int A[],int i,int j)
{
    cout<<"i m here";
    int sum=0;
    int flag=0;
 while(i!=j||sum!=A[n-1])
 {
     sum=A[i]+A[j];
   if(sum>A[n-1])
   {
       sum=A[i]+A[j-1];
       j--;
   }
   if(sum<A[n-1])
   {
       sum=A[i+1]+A[j];
       i++;
   }
   if(sum==A[n-1])
   {
       break;
       I=i;
       J=j;
       flag=1;

   }

 }
 if(flag==1)
    return 1;
 else
    return 0;
}
int main()
{
  int T;
  cin>>T;
  while(T)
  {
    int N,K;
    cin>>N>>K;
     int A[N];
     n=N;
    for(int i=0;i<N;i++)
        cin>>A[i];
        int result=0;
        I=0,J=N-2;
        while(I!=J)
        {
            if(check(A,I,J))
              {
                 result++;
              }

        }




        if(result==K)
        {
            cout<<"yes"<<endl;
        }
        else
            cout<<"no"<<endl;
   T--;
  }
return 0;
}
