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










  int main()
{
 #ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
#endif
    std::ios_base::sync_with_stdio (false);

    int  i,j,k,x,y,l,n,m,t,sum1;
cin>>n>>m>>k;
vector < vector<char> > v(n,vector<char>(m));
vector < int > v1(n,0);
vector < vector<bool> > check(n,vector<bool >(m,false));

for1(i,0,n)
{  
	for1(j,0,m)
	cin>>v[i][j];
}   
for1(i,0,n)
{
	for1(j,0,m)
	{
		if (v[i][j]=='.')
			++v1[i];
	}
}


for1(i,0,n-1)
{
	for1(j,0,m)
	{
		if ((v[i][j]=='.')&&(v[i+1][j]=='.'))
			{check[i][j]=true; break;}
			
	}
}
sum1=0;  i=0;

while(sum1<k)
{
if (sum1+v1[i]<=k)
{  sum1+=v1[i];
	for1(j,0,m)
	{
		if (v[i][j]=='.')
			v[i][j]='X';
   }
}

else if (sum1+v1[i]>k)
{  while(sum1<k)
	{if ((v[i][j]=='.')&&(!check[i][j]))
			{v[i][j]='X';  ++sum1; }
} }
++i; }

for1(i,0,n)
{
	for1(j,0,m)
	{
		cout<<v[i][j];
	}
	cout<<endl;
}
return 0;
}