#include<bits/stdc++.h>
using namespace std;
int main()
{
cout<<"type the two string"<<endl;
string C,D;
cin>>C>>D;
int tracker1=0,tracker2=0;
int c=C.length()-1,d=D.length()-1;
int countt=0,maxx=0;
while(c>=0)
{
    int flag=0;
    d=D.length()-1;
    while(d>=0)
    {
        if(C[c]==D[d]&&tracker2>=d)
        {
           tracker2=d;
           countt++;
           cout<<countt++<<endl;
           flag=1;
           break;
        }
      d--;

    }

    if(flag!=1)
    {
        if(countt>=maxx)
            maxx=countt;
        countt=0;
        tracker2=0;
        c=--tracker1;

    }
    else{
        c++;
    }

}
cout<<maxx<<endl;


return 0;
}
