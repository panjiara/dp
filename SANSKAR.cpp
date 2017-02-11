#include<bits/stdc++.h>
using namespace std;
int main()
{
  int T;
  cin>>T;
  while(T)
  {
    int N,K;
    cin>>N>>K;
     int A[N];
    for(int i=0;i<N;i++)
        cin>>A[i];
        int result=0;
        for(int L=1;L<N;L++)
        {
            for(int i=0;i<N-1-L+1;i++)
            {
                int j=i+L-1;
                int sum=0;
                for(int k=i;k<=j;k++)
                {
                   sum=sum+A[k];
                }
                if(sum==A[N-1])
                {
                  result++;
                }

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
