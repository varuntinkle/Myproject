# include <iostream>
# include <stdio.h>
# include <algorithm>
# include <queue>
# include <set>
# include <string.h>
# include <vector>
# include <fstream>
# include <math.h>
# include <sstream>
# include <stack>
 
# define for1(i,k,n)              for(long long i=k;i<n;i++)
# define for2(i,k,n)              for(long long i=k;i<=n;i++)
# define Min(x,y)                   ((x)<(y)?(x):(y))
# define Max(x,y)                   ((x)>(y)?(x):(y))
# define INF (long long int ) 1e15
# define ALL(x)                  (begin(x),end(x))
# define Abs(x)                 (x>=0?x:-x)
 
using namespace std;
typedef long long int  ll;
ll  time1;
vector < vector< int> > g;
vector <int> status;
vector <int> parent;
vector<int> child;
vector <bool> check;
vector <int> low;
vector <int> in;
void dfs (int x)
{
    if (status[x]!=0)
        return;
   int y;  ++time1;
    in[x]=time1;
    low[x]=time1;
    status[x]=1;
    for1(i,0,g[x].size())
    {
y=g[x][i];
if (status[y]==0)
{
    parent[y]=x;
    ++child[x];
    dfs(y);
    low[x]=Min(low[x],low[y]);
    if ((parent[x]==-1)&&(child[x]>1))
        check[x]=true;
    if ((parent[x]!=-1)&&(low[y]>=in[x]))
        check[x]=true;
}
else if (y!=parent[x])
{
    low[x]=Min(low[x],in[y]);
}
 
 
    }
    status[x]=2;
}
 
 
 
 
 
 
 
 int  main()
{
 #ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
#endif
    //std::ios_base::sync_with_stdio (false);
 
    int  i,j,k,x,y,l,n,m,t,sum1;
scanf("%d",&t);
while(t--)
{
    scanf("%d%d%d",&n,&m,&k);
    sum1=0; time1=0;
g.clear();
in.clear();
low.clear();
parent.clear();
child.clear();
check.clear();
status.clear();
g.resize(n);
status.resize(n);
in.resize(n);
low.resize(n);
parent.resize(n);
child.resize(n);
check.resize(n);
 
fill(parent.begin(),parent.end(),-1);
fill(child.begin(),child.end(),0);
fill(check.begin(),check.end(),0);
fill(status.begin(),status.end(),0);
 
for1(i,0,m)
{
    scanf("%d%d",&x,&y);
    g[x].push_back(y);
    g[y].push_back(x);
}
for1(i,0,n)
{
    if (status[i]==0)
        dfs(i);
}
for1(i,0,n)
{
    if (check[i])
        ++sum1;
}
ll f=sum1*k;
printf("%lld\n",f);
}
return 0;
} 