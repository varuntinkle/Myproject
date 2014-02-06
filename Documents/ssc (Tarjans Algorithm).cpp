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

int  t;
vector < vector <int> >  g;
vector <int> status;
vector <int> status2;
vector <int> status3;
vector <int> v1;
vector <int> reach;
stack <int> global;
ll d1;
void dfs (int x)
{ 

	int y;
	if (status[x]!=0)
		return;
	
	++t;
	global.push(x);
	status2[x]=t;
status3[x]=t;
if (status[x]==0)
{
	status[x]=1;
	for1(i,0,g[x].size())
	dfs(g[x][i]);
}
status [x]=2;

for1(i,0,g[x].size())
{
 status2[x]=Min(status2[x],status2[g[x][i]]); 

}


if (status2[x]==status3[x])
{  

while (global.top()!=x)
{  
	y=global.top();
	global.pop();
		v1[y]=x;
	 //cout<<y<<" ";
} 

  //cout<<x<<endl;
v1[x]=x;
global.pop();
}
return;
}




  int main()
{
 #ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
     //freopen("out.txt", "w", stdout);
#endif
    std::ios_base::sync_with_stdio (false);

    ll i,j,k,x,y,l,n,m,e,v,sum1;

while ((cin>>v)&&(v!=0))
{
	t=0;d1=0;
	g.clear();
   status.clear();
   g.resize(v+1);
   status.resize(v+1);
  fill(status.begin(),status.end(),0);
   status2.clear();
   status3.clear();
   status2.resize(v+1);
   status3.resize(v+1);
   v1.clear();
   v1.resize(v+1);
  for1(i,1,v+1)
  v1[i]=i;
cin>>e;
for1(i,0,e)
{
	cin>>x>>y;
	g[x].push_back(y);
}
while(!global.empty())
global.pop();
for1(i,1,v+1)
{
	if (status[i]==0)
	{
		dfs(i);
	}

}
//for1(i,1,v+1)
//cout<<v1[i]<<" ";
//cout<<endl;
vector <bool> check(t,true);
for1(i,1,v+1)
{
	for1(j,0,g[i].size())
	{
		if (v1[g[i][j]]!=v1[i])
			check[v1[i]]=false;

	}
}
for1(i,1,v+1)
{
	if (check[v1[i]])
		 cout<<i<<" ";
}
cout<<endl;
}
return 0;
}
