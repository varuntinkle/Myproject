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
typedef long long int ll;



vector < vector<char> > v;
vector < vector <int> > status;
vector < vector <int> > d;
vector <char > next1(256);
int d1;
int dx[4]={-1,1,0,0},dy[4]={0,0,-1,1};
ll n,m;
bool check (ll x,ll y)
{
    return ((x>=1)&&(x<=n)&&(y>=1)&&(y<=m));
}
void dfs (ll x,ll y)

{

  if (status[x][y]==2)
    return;
if (status[x][y]==1)
{
    d1=-1;
    return ;
}
if (status[x][y]==0)
{status [x][y]=1;
d[x][y]=1;
for1(i,0,4)
{
    int x1= x+dx[i];
    int y1= y+dy[i];
    if (check (x1,y1))
    {
        if (next1[v[x][y]]==v[x1][y1])
        { 
            dfs (x1,y1);

            d[x][y]=Max(d[x][y],1+d[x1][y1]);
        }
    }
}
status[x][y]=2; return;  }
}





  int main()
{
 #ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
#endif
    ll i,j,k,x,y,l,t,sum1;
    d1=0;sum1=0;
    cin>>n>>m;
    d.resize(n+1,vector<int>(m+1,1));
    status.resize(n+1,vector<int>(m+1,0));
    v.resize(n+1,vector<char>(m+1));
    next1['D']='I';
    next1['I']='M';
    next1['M']='A';
    next1['A']='D';
    for1(i,1,n+1)
    {
        for1(j,1,m+1)
        cin>>v[i][j];
    }
   for1(i,1,n+1)
    {
        for1(j,1,m+1)
        {
            if ((v[i][j]=='D')&&(status[i][j]==0))
                dfs(i,j);
        }
    }
     for1(i,1,n+1)
    {
        for1(j,1,m+1)
        {
           
            sum1=Max(sum1,d[i][j]);
        }
    }
    if (d1==-1)
    {
        cout<<"Poor Inna!"<<endl;
        return 0;
    }
    sum1/=4;
    if (sum1==0)
    {
        cout<<"Poor Dima!"<<endl;
        return 0;
    }
    cout<<sum1<<endl;





return 0;
}