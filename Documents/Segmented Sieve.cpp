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
{ll i,j,k,x,y,l,n,m,t;
cin>>x>>y;
n=(ll)sqrt(y);
vector<bool> p1(n+1);
fill(p1.begin(),p1.end(),1);
m=(ll)sqrt(n);
for2(i,2,m)
{
if (p1[i]==1)
{
    for(j=i;i*j<=n;j++)
        p1[i*j]=0;
}
}
vector<bool> p(y-x+1);
fill(p.begin(),p.end(),1);
for2(i,2,n)
{
if (p1[i])
 {if (x%i==0)
    k=0;
 else
    k=-(x%i)+i;
    for(j=k;j<y-x+1;j=j+i)
 {
p[j]=0;
 }
} }
for1(i,0,y-x+1)
{
    cout<<x+i<<" "<<p[i]<<endl;
}
return 0;
}
