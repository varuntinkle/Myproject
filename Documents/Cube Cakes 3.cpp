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
{  ios_base::sync_with_stdio(0);
    ll i,j,k,x,y,l,n,m,t,sum1,p;
ifstream fin; ofstream fout;
fin.open("D:\Input.txt");
fout.open("D:\Output.txt");
cin>>t;
while(t--)
{

scanf("%lld %lld",&n,&p);
ll    m1=n+1;
    l= (n+1)*(n+1)*(n+1);
    vector <ll> v(l,0);
    char s1[n*n*n];char s2[n*n*n];
    scanf("%s",s1);
scanf("%s",s2);

vector <ll> v2(n+1,0);
    for2(i,1,n)
    {
        for2(j,1,n)
        {
            for2(k,1,n)
            {
                //cout<<"Yeah"<<endl;
                v[i*m1*m1+j*m1+k]= v[i*m1*m1+j*m1+(k-1)]+ v[(i-1)*m1*m1+j*m1+k]+ v[i*m1*m1+(j-1)*m1+k]- v[(i-1)*m1*m1+(j-1)*m1+k]- v[(i-1)*m1*m1+j*m1+(k-1)]- v[i*m1*m1+(j-1)*m1+(k-1)]+ v[(i-1)*m1*m1+(j-1)*m1+(k-1)];
             if (s1[(i-1)*n*n+(j-1)*n+k-1]==s2[(i-1)*n*n+(j-1)*n+k-1])
                        ++v[i*m1*m1+j*m1+k];

            }
        }
    }
//cout<<"Yeah"<<endl;
//for1(i,0,l)
//fout<<v[i];
//fout<<endl;
    for1(m,0,n)
    {
        for2(i,1,n)
        {
            for2(j,1,n)
            {
                for2(k,1,n)
                {
                    if (((i+m)<=n)&&((j+m)<=n)&&((k+m<=n)))
 {x= v[(i+m)*m1*m1+(j+m)*m1+k+m]-v[(i+m)*m1*m1+(j+m)*m1+(k-1)]-v[(i+m)*m1*m1+(j-1)*m1+k+m]-v[(i-1)*m1*m1+(j+m)*m1+k+m]+v[(i-1)*m1*m1+(j-1)*m1+k+m]+v[(i+m)*m1*m1+(j-1)*m1+(k-1)]+v[(i-1)*m1*m1+(j+m)*m1+(k-1)]-v[(i-1)*m1*m1+(j-1)*m1+(k-1)];
                 //fout<<i<<" "<<j<<" "<<k<<" "<<m<<" "<<x<<endl;
                if ((x*100)>=(m+1)*(m+1)*(m+1)*p)
                        {

                             ++v2[m+1];
                        }



                }
            }
        }
    }
    }

for(i=n;i>=1;i--)
{
    if (v2[i]>0)
    {
        printf("%lld %lld",i,v2[i]);
        break;
    }
}
if (i==0)
        printf("-1");




}
return 0;
}
