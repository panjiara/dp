#include<bits/stdc++.h>
using namespace std;
int array[100];
int min_step(int n)
{
    cout<<"i am here for up "<<n<<endl;
    if(n==1)
        return 0;
    if(array[n]!=-1)
        return array[n];
    else
   {
       int r=1+min_step(n-1);
       if(n%2==0)
       {
           r=min(r,1+min_step(n/2));
           cout<<"i am here for  n/2  "<<n<<endl;
       }

       if(n%3==0)
       {
          r=min(r,1+min_step(n/3));
          cout<<"i am here for n/3  "<<n<<endl;
       }

       array[n]=r;
       cout<<r<<endl;
       return r;

    }

}
int main()
{
    for(int i=0;i<100;i++)
    array[i]=-1;
    cout<<"type the number";
    int n;
    cin>>n;
  cout<<min_step(n);





    return 0;
}
