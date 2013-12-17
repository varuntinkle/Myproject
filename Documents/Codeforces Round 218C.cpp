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
{ll i,j,x,y,l,n,m,t,sum1;
ifstream fin; ofstream fout;
fin.open("D:\Input.txt");
fout.open("D:\Output.txt");
string s;
cin>>s;
l=s.length();
sum1=0;
vector<ll> h(3);
vector <ll> c(3);
vector <ll> p(3);
for1(i,0,3)
cin>>h[i];
for1(i,0,3)
cin>>p[i];
cin>>m;
l=s.length();
for1(i,0,l)
{
    if (s[i]=='B')
        ++c[0];
        if (s[i]=='S')
        ++c[1];
        if (s[i]=='C')
        ++c[2];

}
t=0;
for1(i,0,3)
t+=c[i]*p[i];
ll min1=  m/t;
ll t2=0;
for1(i,0,3)
{
    n=(c[i]*min1-h[i])*p[i];
if (n>0)
    t2+=n;
    }
m=m-t2;
sum1+=min1;
for1(i,0,3)
{
    h[i]=Max(h[i]-min1*c[i],0);
}
vector <ll> k(3);
while(m>0)
{
    for1(i,0,3)
    {
        if (h[i]<c[i])
        {
        m=m-(c[i]-h[i])*p[i];
            if (m<0)
            {
                cout<<sum1<<endl;
                return 0;
            }
            h[i]=c[i];
        }
    }

    for1(i,0,3)
    {
    if (c[i]==0)
    k[i]=1E15;
    else
        k[i]= (ll)h[i]/c[i];

    }
    y=*min_element(k.begin(),k.end());
    sum1+=y;
    for1(i,0,3)
    {
        h[i]-=c[i]*y;
    }
}
cout<<sum1<<endl;
return 0;
}
