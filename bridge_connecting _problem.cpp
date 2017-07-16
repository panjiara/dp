#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin>>N;
    int A[N],B[N],R[N];
    for(int i=0;i<N;i++)
    {
        cout<<"Enter the value of A["<<i+1<<"]"<<endl;
        cin>>A[i]>>endl;
        cout<<"Enter the value of B["<<i+1<<"]"<<endl;
        cin>>B[i]>>endl;
        R[i]=1;
    }
    int counteri=0,counterj=0;
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<i;j++)
        {
            /*sort the lower array and then apply the longest increasing subsequence on upper array*/
            /*this problem can be solved better by graph so i have to wait until graph is complete*/


        }



    }


    return 0;

}
