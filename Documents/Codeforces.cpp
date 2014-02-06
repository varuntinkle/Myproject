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
# define Min(x,y)                   (x<y?x:y)
# define Max(x,y)                   (x>y?x:y)
# define INF (long long int ) 1e15
# define ALL(x)                  begin(x),end(x)

using namespace std;
typedef long long int ll;


 ll i,j,k,x,y,l,n,m,t,a,b,sum1;
    
ll distance (ll a1,ll a2)
{
	ll x1,y1;
	x1=abs
}






  int main()
{
 #ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
#endif
   cin>>n>>m>>i>>j>>a>>b;
sum1=INF;
ll x1,y1,x2,y2;
x1= (n-i)%a==0 ? (n-i)/a:INF;
x2= (i-1)%a==0 ? (i-1)/a:INF;
y1= (m-j)%b==0 ? (m-j)/b:INF;
y2= (j-1)%b==0 ? (j-1)/b:INF;
if ((x1-y1)%2==0))
sum1=Min(sum1,Max(x1,y1));
if ((x1-y2)%2==0))
sum1=Min(sum1,Max(x1,y2));
if ((x2-y1)%2==0)
sum1=Min(sum1,Max(x2,y1));
if ((x2-y2)%2==0)
sum1=Min(sum1,Max(x2,y2));
if ((i==n)&&(j==m))
{cout<<0<<endl;
	return 0; }
if ((n==1)&&(m!=1)&&((j==(1))))
{
	cout<<0<<endl;
	return 0;
}
if ((n==1)&&(m!=1)&&((j==(m))))
{
	cout<<0<<endl;
	return 0;
}
if ((m==1)&&(n!=1)&&((i==(1))))
{
	cout<<0<<endl;
	return 0;
}
if ((m==1)&&(n!=1)&&((j==(n))))
{
	cout<<0<<endl;
	return 0;
}
if ((n==1)&&(m==1))
	{cout<<0<<endl;
		return 0;}
  if (1+a>n)
	{cout<<"Poor Inna and pony!"<<endl;
return 0; }
if (1+b>m)
	{cout<<"Poor Inna and pony!"<<endl;
return 0; }
if (sum1==INF)
{cout<<"Poor Inna and pony!"<<endl;
return 0;}

cout<<sum1<<endl;
return 0;
}
