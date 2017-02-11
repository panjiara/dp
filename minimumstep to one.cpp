#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int cont=0;
    while(n!=1)
    {
        cont++;
        if(n%3==0)
        {
           n=n/3;
           cout<<"divided by 3 "<<endl<<n<<endl;
        }
        else if(n%2==0)
        {
            n=n/2;
            cout<<"divided by 2"<<endl<<n<<endl;
        }
        else
        {
            n=n-1;

            cout<<"kuch nahi mila"<<endl<<n<<endl;
        }
    }
    cout<<cont<<endl;
}
