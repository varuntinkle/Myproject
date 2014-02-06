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

#ifndef ONLINE_JUDGE //  ifndef checks whether this macro is defined earlier or not
#define gc getchar //for local PC
#else
#define gc getchar_unlocked //for online judge environments

#endif
# define for1(i,k,n)              for(long long i=k;i<n;i++)
# define for2(i,k,n)              for(long long i=k;i<=n;i++)
# define Min(x,y)                   ((x)<(y)?(x):(y))
# define Max(x,y)                   ((x)>(y)?(x):(y))
# define INF (long long int ) 1e15
# define ALL(x)                  (begin(x),end(x))
# define Abs(x)                 (x>=0?x:-x)

using namespace std;
typedef long long int ll;

ll read_ll()
{
register char c=gc();
while(c<'0'||c>'9')
    c=gc();  //ignore all characters till the first digit
int ret=0;
while(c>='0' && c<='9') //till we get a stream of digits.As soon as we get something else,we stop
{
ret=ret*10+(c-48);//construct the number
c=gc();
}
return ret;
}


int n,time1;
stack <int> s;
bool g[5001][5001];int min1[5001];
bool  status[5001];
int time2[5001];
bool ssc[5001][5001];
void dfs (int x)
{++time1;
	time2[x]=time1;
	min1[x]=time1;
	status[x]=true;
	s.push(x);
	for1(i,1,n+1)
	{
		if (g[x][i])
		{
			if (!status[i])
			{
dfs(i);
			}
		}
	}
	for1(i,1,n+1)
	{ 
		if (g[x][i])
		{
			min1[x]=Min(min1[x],min1[i]);
		}
	}
	if (min1[x]==time2[x])
	{
		
		while(s.top()!=x)
		{ int y=s.top();
			s.pop();
			ssc[x][y]=true;
			ssc[y][x]=true;
		}
		s.pop();
	}
}


  int main()
{
 #ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
#endif
    std::ios_base::sync_with_stdio (false);

    int i,j,k,x,y,l,m,t,sum1,e;
cin>>n;
while(n!=0)
{cin>>e;
	time1=0;
memset(g,0,sizeof(g));
memset(status,0,sizeof(status));
memset(time2,0,sizeof(time2));
memset(min1,0,sizeof(min1));
memset(ssc,0,sizeof(ssc));
memset(time2,0,sizeof(time2));
bool c;
for1(i,0,e)
{
cin>>x>>y;
g[x][y]=true;
}
for1(i,1,n+1)
{
	if (!status[i])
		dfs(i);
}
for1(i,1,n+1)
{c=true;
	for1(j,1,n+1)
	{
if (g[i][j])
{

	if (!ssc[i][j])
c=false;
	} }
	if (c)
		cout<<i<<" ";
} 
cout<<endl;
	cin>>n;
}
return 0;
}