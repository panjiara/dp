#include<bits/stdc++.h>
using namespace std;
int B[1000]={0};
int sum(int x)
{
    int some=0;
    int y=x;
    while(y!=0)
    {
        if(B[y]!=0)
        {

        }
        some+=(y%10);
        y=y/10;

    }
    return some;


}
int main()
{
    int n;
    cin>>n;
    int res=0;
    for(int i=1;i<=n;i++)
    {
        res=res+sum(i);


    }
    cout<<res<<endl;3




    return 0;
}
