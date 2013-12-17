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

# define ALL(x)                  begin(x),end(x)
using namespace std;
typedef long long int ll;





int main()
{ll i,j,k,x,y,l,n,m,t,sum1;
ifstream fin; ofstream fout;
fin.open("D:\Input.txt");
fout.open("D:\Output.txt");
fin>>n>>m;
vector <ll> v(n);
vector <ll> f(m,0);
vector <ll> v2(n);
for1(i,0,n)
{
    fin>>v[i];
    v2[i]=v[i];
    ++f[v[i]];
}
vector <bool> b(n,0);
for1(i,0,n)
{

}

return 0;
}
