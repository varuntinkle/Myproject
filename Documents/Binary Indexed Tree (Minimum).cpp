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
# define Min(x,y)                   x<y?x:y
# define Max(x,y)                   x>y?x:y

# define ALL(x)                  begin(x),end(x)
using namespace std;
typedef long long int ll;
vector <ll> v;

ll fast_exp(ll base, ll exp) {
   ll res=1;
   while(exp>0) {
      if(exp%2==1) res=(res*base);
      base=(base*base);
      exp/=2;
   }
   return res;
}





int main()
{ll i,j,k,x,y,l,n,m,t,sum1;
ifstream fin; ofstream fout;


fin>>n;
vector <ll> v(n);
for1(i,0,n)
fin>>v[i];
l= (floor)(log2(n)) ;

vector < vector<ll> > v1(l+1,vector<ll>(n,0));
for1(i,0,n)
{
    v1[0][i]=v[i];
}
for2(i,1,l)
{
    for1(j,0,n)
    {if (j+fast_exp(2,i)-1<n)
    {
        v1[i][j]=Min(v1[i-1][j],v1[i-1][j+fast_exp(2,i-1)]);
        fout<<i<<" "<<j<<" "<<v1[i][j]<<endl;
    } }
}
fin>>m; ll d;
for1(i,0,m)
{
    fin>>x>>y;
    d=(floor)(log2(y-x));
    n= Min(v1[d][x],v1[d][y+1-fast_exp(2,d)]);
    cout<<n<<endl;

}
return 0;
}
