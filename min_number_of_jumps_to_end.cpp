#include<bits/stdc++.h>
using namespace std;
int main()
{
   int N;
   cin>>N;
   int A[N],S[N],F[N];
   S[0]=0,F[0]=0;
   for(int i=0;i<N;i++)
   {
       cin>>A[i];

   }

   for(int i=1;i<N;i++)
   {
       for(int j=0;j<i;j++)
       {
          S[i]=INT_MAX;
        if(i<=A[j]+j&&S[j]!=INT_MAX)
        {
            int b;
            S[i]=b;
            S[i]=min(S[i],S[j]+1);
            cout<<S[i]<<endl;
            if(b>S[i])
            {
              F[i]=j;

            }
            else
                F[i]=0;

            break;
        }


    }

   }

    for(int i=0;i<N;i++)
    {
            cout<<A[F[i]]<<"=>";
    }




    return 0;
}
