#include<bits/stdc++.h>
using namespace std;
int vis[1000010];
int main()
{
    int t,n,m,i,c,k;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        c=0;
        memset(vis,0,sizeof(vis));
        for(i=0;i<n;i++)
        {
            cin>>k;
            vis[k]=1;
        }
        for(i=0;i<m;i++)
        {
            cin>>k;
            if(vis[k]==1)
            c++;
        }
        cout<<c<<"\n";
    }
    return 0;
} #include<bits/stdc++.h>
using namespace std;
int vis[1000010];
int main()
{
    int t,n,m,i,c,k;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        c=0;
        memset(vis,0,sizeof(vis));
        for(i=0;i<n;i++)
        {
            cin>>k;
            vis[k]=1;
        }
        for(i=0;i<m;i++)
        {
            cin>>k;
            if(vis[k]==1)
            c++;
        }
        cout<<c<<"\n";
    }
    return 0;
}
