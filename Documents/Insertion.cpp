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
# define MOD                        1000000007
# ifndef ONLINE_JUDGE //  ifndef checks whether this macro is defined earlier or not
# define gc getchar //for local PC
# else
# define gc getchar_unlocked //for online judge environments
# endif
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









int main()
{
	ll i,j,k,x,y,z,t,m,n,a,b,c;
 	#ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
	#endif
        std::ios_base::sync_with_stdio (false);
    


return 0;
}