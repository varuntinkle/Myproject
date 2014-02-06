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
 
int time1,sum1;
vector< vector<int> > g;
vector <int> status;
vector <int> parent;
vector <int> low;
vector <int> in;
vector <int> fin;
vector <int> child;
vector <bool> check;
void dfs (int x)
{
	++time1; 
	low[x]=time1;// min dfs in the subtree rooted at x,initialised to be dfs no of x
	in[x]=time1; //dfs number for x stored in in x
		if (status[x]!=0)
			return;
		status[x]=1;
		for1(i,0,g[x].size())
		{   //normal dfs going on
			if (status[g[x][i]]==0)
			{
				parent[g[x][i]]=x;
				++child[x];
				dfs(g[x][i]);
				low[x]=Min(low[x],low[g[x][i]]);

				if ((parent[x]==-1)&&(child[x]>1))
					check[x]=true;
				if (parent[x]!=-1)
				{  //cout<<x<<" "<<g[x][i]<<" "<<low[g[x][i]]<<endl;
					if (low[g[x][i]]>=in[x])
						check[x]=true;
				}
			}
			else if (g[x][i]!=parent[x])
			{
				low[x]=Min(low[x],low[g[x][i]]);
			}
		}
		status[x]=2;
		
	}
 
 
 
 
 
  int main()
{

 #ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
#endif
  std::ios_base::sync_with_stdio (false);
 
    int i,j,k,x,y,l,n,m,t,sum1;
    
cin>>t;
while(t--)
{sum1=0; time1=0;
	cin>>n>>m>>k;
	g.clear();
	child.clear();
	in.clear();
	fin.clear();
	status.clear();
	check.clear();
	low.clear();
	parent.clear();
	g.resize(n);
	in.resize(n);
	fin.resize(n);
	status.resize(n);
	low.resize(n);
	child.resize(n);
	parent.resize(n);
	check.resize(n);
	fill(check.begin(),check.end(),false);
	fill(parent.begin(),parent.end(),-1);
	fill(status.begin(),status.end(),0);
	fill(child.begin(),child.end(),0);
	for1(i,0,m)
	{
		cin>>x>>y;
		g[x].push_back(y);
		g[y].push_back(x);
	}
	for1(i,0,n)
	{
		if (status[i]==0)  // normal dfs
			dfs(i);
	}
	for1(i,0,n)
	{
		if (check[i])
			{ //cout<<i<<" ";
				++sum1; }
	}
cout<<sum1*k<<endl;
}
return 0;
} 