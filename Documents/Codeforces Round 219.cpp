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





bool v2[52][52][52][52];
ll v3[52][52][52][52];




  int main()
{
 #ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    freopen ("out.txt","w",stdout);
#endif
    std::ios_base::sync_with_stdio (false);

    ll i,j,k,x,y,l,n,m,t,sum1,q;

cin>>n>>m>>q;
vector < vector<int> > v(n+1,vector<int>(m+1));
vector < vector<int> > v1(n+1,vector<int>(m+1,0));
memset(v2,0,sizeof(v2));
memset(v3,0,sizeof(v3));
for1(i,1,n+1)
{
	for1(j,1,m+1)
	{
		cin>>v[i][j];
	}
}
for1(i,1,n+1)
{
	for1(j,1,m+1)
	{
		v1[i][j]=v1[i-1][j]+v1[i][j-1]-v1[i-1][j-1];
		if (v[i][j]==1)
			++v1[i][j];
		
	}
}

for1(x1,1,n+1)
{
	for1(y1,1,m+1)
	{
		for1(x2,x1,n+1)
		{
			for1(y2,y1,m+1)
			{
				if (v1[x2][y2]-v1[x1-1][y2]-v1[x2][y1-1]+v1[x1-1][y1-1]==0)
					v2[x1][y1][x2][y2]=true;
				
			}
		}
		
	}
}
for1(d1,0,n)
{
for1(x1,1,n+1-d1)
{
	for1(d2,0,m)
	{
		for1(y1,1,m+1-d2)
		{
			ll x2=x1+d1;
			ll y2=y1+d2;
			v3[x1][y1][x2][y2]=v3[x1+1][y1][x2][y2]+v3[x1][y1+1][x2][y2]+v3[x1][y1][x2-1][y2]+v3[x1][y1][x2][y2-1]
-v3[x1+1][y1+1][x2][y2]-v3[x1+1][y1][x2-1][y2]-v3[x1+1][y1][x2][y2-1]
-v3[x1][y1+1][x2-1][y2]-v3[x1][y1+1][x2][y2-1]-v3[x1][y1][x2-1][y2-1]
+v3[x1+1][y1+1][x2-1][y2]
+v3[x1+1][y1+1][x2][y2-1]+v3[x1+1][y1][x2-1][y2-1]+v3[x1][y1+1][x2-1][y2-1]
-v3[x1+1][y1+1][x2-1][y2-1];
if (v2[x1][y1][x2][y2])
	++v3[x1][y1][x2][y2];
cout<<x1<<" "<<y1<<" "<<x2<<" "<<y2<<" "<<v3[x1][y1][x2][y2]<<endl;
		}
	}
}
}

ll x1,y1,x2,y2;
for1(i,0,q)
{
cin>>x1>>y1>>x2>>y2;
cout<<v3[x1][y1][x2][y2]<<endl;
}
return 0;
}