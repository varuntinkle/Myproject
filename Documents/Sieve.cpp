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

# define for1(i,k,n)              for(int i=k;i<n;i++)
# define for2(i,k,n)              for(int i=k;i<=n;i++)

# define ALL(x)                  begin(x),end(x)
using namespace std;
typedef long long int ll;




int main()
{ll i,j,k,x,y,l,n,m,t,sum1;
cin>>n;
vector<bool> p(n+1);
fill(p.begin(),p.end(),true);
m=(ll)sqrt(n);
for2(i,2,m)
{
if (p[i])
{
    for(j=i;i*j<=n;j++)
        p[i*j]=false;
}
}
/*vector <ll> Prime;
for1(i,2,p.size())
{
    if (p[i]==1)
        Prime.push_back(i);
} */
return 0;
}
