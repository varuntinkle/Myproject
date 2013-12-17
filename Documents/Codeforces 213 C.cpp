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
# define ALL(x)                  begin(x),end(x)
using namespace std;
typedef long long int ll;




int main()
{
    ll i,j,k,x,y,l,n,m,t,a;
ifstream fin;ofstream fout;
fin.open("D:/Input.txt");
fout.open("D:/Output.txt");
cin>>a;
string s;
cin>>s;
l=s.length();
vector < vector<ll> > v(l,vector<ll>(v));
vector < vector<ll> > b(l,vector<ll>(v));
for(i=0;i<l;i++)
{
    for(j=0;j<l;j++)
    {
        v[i][j]=(s[i]-48)*(s[j]-48);

    }
}

    b[0][0]=v[0][0];
    for(j=1;j<l;j++)
    {
            b[0][j]=b[0][j-1]+v[0][j];

    }
      for(i=1;i<l;i++)
    {

            b[i][0]=b[i-1][0]+v[i][0];

    }
for1(i,0,l-1)
{
for1(j,0,l-1)
{
 b[i+1][j+1]=b[i+1][j]+b[i][j+1]-b[i][j]+v[i+1][j+1];

}
} ll count1;
for1(x,0,l)
{
   for(y=x;y<l;y++)
    { z=0;t=0;
     while(sum2<a)
      {  t=z;
         ll sum2=b[y,t]-b[x,t]-b[y,z]+b[x,z];
          if (sum2<a)
            ++t;
          if (sum2>=a)
            ++z;
          if (sum2==a)
            ++sum1;
      }
    }
}

return 0;
}
