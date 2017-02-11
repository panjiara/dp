#include<bits/stdc++.h>
using namespace std;
double dis(int prevx,int prevy,int x,int y)
{
    double p=(prevx-x)*(prevx-x);
    double q=(prevy-y)*(prevy-y);
    return sqrt(p+q);
}
int main()
{
    int t,n,prevx,prevy,x,y,m,i,l,c,usel,usec,inix,iniy;
    int cost;
    cin>>t;
    double w;
    int p;
    while(t--)
    {
        cin>>n;
        cost=0;
        double mi=100000000000000;
        double a[n+1];
        cin>>prevx>>prevy;
        inix=prevx;
        iniy=prevy;
        for(i=2;i<=n;i++)
        {
            cin>>x>>y;
            a[i]=dis(prevx,prevy,x,y);
            cout<<a[i]<<"hello\n";
            prevx=x;
            prevy=y;
        }
        a[1]=dis(inix,iniy,prevx,prevy);
        cin>>m;
        for(i=1;i<=m;i++)
        {
            cin>>l>>c;
            w=((1.0*l)/(1.0*c));
            if(mi>w)
            {
                mi=w;
                usel=l;
                usec=c;
            }
        }
        cout<<"mihni "<<mi<<endl;
        for(i=1;i<=n;i++)
        {
            p=(int)a[i];
            if((p%usel)==0)
            {
                if(a[i]-p>0)
                {
                    cost+=(p/usel+1)*usec;
                }
                else
                {
                    cost+=(p/usel)*usec;
                }
            }
            else
            {
                cost+=(p/usel+1)*c;
            }
            cout<<a[i]<<" "<<p<<" "<<cost<<"\n";
        }
        cout<<cost<<"\n";
    }
    return 0;
}
