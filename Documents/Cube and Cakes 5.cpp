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
fin>>t;
while(t--)
{ll p;
    fin>>n>>p;
    string s1,s2;
    ll a[n][n][n];ll b[n][n][n];
    fin>>s1;
    fin>>s2;
    for1(i,0,n)
    {
        for1(j,0,n)
        {
            for1(k,0,n)
            {
                a[i+1][j+1][k+1]=s1[i*n*n+j*n+k];
                 b[i+1][j+1][k+1]=s2[i*n*n+j*n+k];
            }
        }
    }  ll c[n+1][n+1][n+1];
    memset(c,0,sizeof(c));
    for2(i,1,n)
    {
        for2(j,1,n)
        {
            for2(k,1,n)
            {
                c[i][j][k]=c[i][j-1][k]+c[i-1][j][k]+c[i][j][k-1]-c[i-1][j-1][k]-c[i-1][j][k-1]-c[i][j-1][k-1]+c[i-1][j-1][k-1];
                if (s1[(i-1)*n*n+(j-1)*n+(k-1)]==s2[(i-1)*n*n+(j-1)*n+(k-1)])
                    ++c[i][j][k];

            }
        }
    }

    vector <ll> v2(n+1,0);
    for1(m,0,n)
    {
        for2(i,1,n)
        {
            for2(j,1,n)
            {
                for2(k,1,n)
                {
                    if (((i+m)<=n)&&((j+m)<=n)&&((k+m)<=n))
                    {
                        x=c[i+m][j+m][k+m]-c[i+m][j+m][k-1]-c[i+m][j-1][k+m]-c[i-1][j+m][k+m]+c[i+m][j-1][k-1]+c[i-1][j+m][k-1]+c[i-1][j-1][k+m]+c[i-1][j-1][k-1];
                        if ((x*100)>=(m+1)*(m+1)*(m+1)*p)
                        {
                            ++v2[m+1];
                        }

                    }
                }
            }
        }
    }
    ll m1;
    for(m1=n;m1>=1;m1--)
{
    if (v2[m1]>0)
    {
        fout<<m1<<" "<<v2[m1]<<endl;
        break;
    }
}
if (m1==0)
            fout<<"-1"<<endl;

}
return 0;
}
