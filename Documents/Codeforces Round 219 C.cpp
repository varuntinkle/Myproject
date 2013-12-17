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
cin>>n;
vector <ll> v(n);
for1(i,0,n)
cin>>v[i];
sort(v.begin(),v.end());
vector <bool> b(n);
fill(b.begin(),b.end(),false);
vector <ll> c(n);
//for1(i,0,n)
//fout<<v[i]<<" ";
//fout<<endl;
for1(i,0,n)
{
c[i]=distance(v.begin(),lower_bound(v.begin()+n/2,v.end(),2*v[i]));
if (i>=1)
    if(c[i]<=c[i-1])
    c[i]=c[i-1]+1;
   // fout<<c[i]<<" ";

}
sum1=n;
for1(i,0,n)
{
    if ((c[i]<n)&&(!b[i]))
        --sum1;
    b[c[i]]=true;
}
cout<<sum1;
return 0;
}
