#include<bits/stdc++.h>
using namespace std;
int count1=0;
int maxDivide(int a,int b)
{
    while(a%b==0)
    {
      a=a/b;
      count1++;
    }

    return a;
}
int  isugly(int num)
{
    num=maxDivide(num,2);
    num=maxDivide(num,3);
    num=maxDivide(num,5);
    return (num==1)?1:0;

}
int main()
{
    int N;
    cin>>N;
    int count=0;
    int i=0;
    while(count<N)
    {
        ++i;
        if(isugly(i))
            count++;



    }

    cout<<i<<endl;
    cout<<count1<<endl;



    return 0;
}
