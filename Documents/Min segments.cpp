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




int main()
{ll i,j,k,x,y,n,m,t,sum1;
ll x1,x2,y1,y2;
ifstream fin; ofstream fout;
fin.open("D:\Input.txt");
fout.open("D:\Output.txt");
fin>>n;
vector <ll> v(n);
vector <ll> l(n);
vector <ll> r(n);

for1(i,0,n)
{
    fin>>v[i];
}
vector<ll> v4(v);

fin>>m;
t=floor((double)n/m);
for2(i,0,t)
{
    x=m*i; ll min1=v[x];

    k=0;
    y=Min(n,x+m);
    reverse(v4.begin()+x,v4.begin()+y);
}

for2(i,0,t)
{
    x=m*i; ll min1=v[x];

    k=0; j=x;
    while((j<n)&&(k<m))
    {

        min1=Min(min1,v[j]);
        l[j]=min1;
        ++k;
        j=x+k;
    }
}
for2(i,0,t)
{
    x=m*i; ll min1=v4[x];

    k=0; j=x;
    while((j<n)&&(k<m))
    {

        min1=Min(min1,v4[j]);
        r[j]=min1;
        ++k;
        j=x+k;
    }
}
for1(i,0,n)
fout<<l[i]<<" ";
fout<<endl;
for1(i,0,n)
fout<<r[i]<<" ";
fout<<endl;
fin>>x1;
x2=Min(r[x1],l[x1+m-1]);
fout<<x2<<endl;
return 0;
}
