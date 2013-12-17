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
{ll i,j,k,x,y,l,n,m,t,sum1;
ifstream fin; ofstream fout;
fin.open("D:\Input.txt");
fout.open("D:\Output.txt");
cin>>n>>k;
vector <ll> v(n);
for1(i,0,n)
cin>>v[i];
 sum1=0;
for1(i,0,k)
{ j=i;  ll c1=0; ll c2=0;
    while(j<n)
{
    if (v[j]==1)
        ++c1;
    else
        ++c2;
    j+=k;
}
sum1+=Min(c1,c2);
}
cout<<sum1<<endl;
return 0;
}
