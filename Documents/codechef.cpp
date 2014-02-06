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
typedef  unsigned long long int ll;


 ll i,j,k,x,y,l,n,m,t,d,s,c,sum1,v1,a1,b1;
 double m1;
  int main()
{
 #ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
#endif
    std::ios_base::sync_with_stdio (false);

   

cin>>t;
while(t--)
{
	cin>>l>>d>>s>>c;
	--d;++c;
	m1=s*pow(c,d);
if (s>=l)
{
  cout<<"ALIVE AND KICKING"<<endl;
  continue;
}
	if (m1-l>1E-9)
	 	cout<<"ALIVE AND KICKING"<<endl;
	 else
		cout<<"DEAD AND ROTTING"<<endl; 

}
return 0;
}