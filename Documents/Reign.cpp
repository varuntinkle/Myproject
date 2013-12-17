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





int main()
{ll i,j,k,x,y,l,n,m,t,sum1;
ifstream fin; ofstream fout;
fin.open("D:\Input.txt");
fout.open("D:\Output.txt");
scanf("%lld",&t);
while(t--)
{
   scanf("%lld %lld",&n,&k);
    vector <ll> v(n);
    for1(i,0,n)
    {
        scanf("%lld",&v[i]);
    }
    vector<ll> h(n);
    h[0]=v[0];
    for1(i,1,n)
    {
        h[i]=Max(v[i]+h[i-1],v[i]);
    }
vector <ll> v1(v);
reverse(v1.begin(),v1.end());
vector <ll> h1(n);

h1[0]=v1[0];
    for1(i,1,n)
    {
        h1[i]=Max(v1[i]+h1[i-1],v1[i]);
    }
    reverse(h1.begin(),h1.end());
vector<ll> h2(h1);
reverse(h2.begin(),h2.end());
vector <ll> h3(n);
h3[0]=h2[0];
for1(i,1,n)
{
    h3[i]=Max(h3[i-1],h2[i]);

}
reverse(h3.begin(),h3.end());
vector <ll> h4(n);

for1(i,0,n)
{      if (k+i+1<n)
    {h4[i]=h[i]+h3[k+i+1];


} }
m=*max_element(h4.begin(),h4.begin()+(n-1-k));
printf("%lld\n", m); }
return 0;
}
