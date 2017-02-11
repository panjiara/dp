#include<bits/stdc++.h>
using namespace std;
long long int fcount=0;
long long int value(long long int x)
{
    cout<<"i am here for "<<fcount<< "count "<<x<<endl;
    fcount++;
        if(x==1||x==2)
          {
           return 1;
         }
    else
    {

        return value(x-1)+value(x-2);

    }
}
//so i think you have understood the magic of dynamic programming;;;;happy coding:)

 int main()
{
    cout<<"enter the number"<<endl;
    long long int c;
    cin>>c;
    cout<<value(c);


    return 0;

}
