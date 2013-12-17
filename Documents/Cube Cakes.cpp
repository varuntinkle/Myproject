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



// i*N*N+j*N+k

int main()
{ll i,j,k,x,y,l,n,m,t,sum1,p;
ifstream fin; ofstream fout;
fin.open("D:\Input.txt");
fout.open("D:\Output.txt");
cin>>t;
while(t--)
{
    cin>>n;
    l=(n+1)*(n+1)*(n+1);
    cin>>p;
    string s1,s2;
    cin>>s1;
    cin>>s2;
x=3;
    vector <ll> v(l,0);
    for1(k,0,n)
    {for1(i,0,n)
    {
        for1(j,0,n)
        {
            if ((i==0)&&(j==0)&&(k==0))
            {
                if (s1[0]==s2[0])
                    v[0]=1;
                else v[0]=0;

            }
            if ((i==0)&&(j==0)&&(k!=0))
            {
                  v[k]=v[k-1];
                  if (s1[k]==s2[k])
                    ++v[k];
            }
            if ((i==0)&&(j!=0))
            {     if (k!=0)
                v[j*n+k]=v[(j-1)*(n)+k]+v[j*n+k-1]-v[(j-1)*n+(k-1)];
                if (k==0)
                    v[j*n+k]=v[(j-1)*(n)+k];
                if (s1[j*n+k]==s2[j*n+k])
                    ++v[j*n+k];
            }
             if ((i!=0)&&(j==0))
            {   if (k==0)
                v[i*n*n+k]=v[(i-1)*n*n+k];
                if (k!=0)
                     v[i*n*n+k]=v[(i-1)*n*n+k]+v[i*n*n+k-1]-v[(i-1)*n*n+(k-1)];
                if (s1[i*n*n+k]==s2[(i)*n*n+k])
                    ++v[i*n*n+k];
            }
            if ((i!=0)&&(j!=0))
                {   if (k==0)
                    v[i*n*n+j*n]=v[(i-1)*n*n+j*n+k]+v[i*n*n+(j-1)*n+k]-v[(i-1)*n*n+(j-1)*n+k];
                    if (k!=0)
                        v[i*n*n+j*n+k]= v[i*n*n+j*n+(k-1)]+ v[(i-1)*n*n+j*n+k]+ v[i*n*n+(j-1)*n+k]- v[(i-1)*n*n+(j-1)*n+k]- v[(i-1)*n*n+j*n+(k-1)]- v[i*n*n+(j-1)*n+(k-1)]+ v[(i-1)*n*n+(j-1)*n+(k-1)];
                    if (s1[i*n*n+j*n+k]==s2[i*n*n+j*n+k])
                        ++v[i*n*n+j*n+k];
                }
        }
    }
}
vector <ll> v2(n+1,0);
for1(m,0,n)
{
    for1(i,0,n)
    {
        for1(j,0,n)
        {
            for1(k,0,n)
            {
            if (((i+m)<n)&&((j+m)<n)&&((k+m<n)))
                {if ((i==0)&&(j==0)&&(k==0))
                {
                    x=v[(i+m)*n*n+(j+m)*n+k+m];
                }
                if ((i!=0)&&(j!=0)&&(k!=0))
                {

                   x= v[(i+m)*n*n+(j+m)*n+k+m]-v[(i+m)*n*n+(j+m)*n+(k-1)]-v[(i+m)*n*n+(j-1)*n+k+m]-v[(i-1)*n*n+(j+m)*n+k+m]+v[(i-1)*n*n+(j-1)*n+k+m]+v[(i+m)*n*n+(j-1)*n+(k-1)]+v[(i-1)*n*n+(j+m)*n+(k-1)]-v[(i-1)*n*n+(j-1)*n+(k-1)];
                 }
           if ((i==0)&&(j==0)&&(k!=0))
           {
                x=v[(i+m)*n*n+(j+m)*n+k+m]-v[(i+m)*n*n+(j+m)*n+(k-1)];
           }
                 if ((i==0)&&(j!=0)&&(k==0))
                 {
                      x= v[(i+m)*n*n+(j+m)*n+k+m]-v[(i+m)*n*n+(j-1)*n+(k+m)];
                 }
                if ((i!=0)&&(j==0)&&(k==0))
                 {
                      x= v[(i+m)*n*n+(j+m)*n+k+m]-v[(i-1)*n*n+(j+m)*n+(k+m)];
                 }
                 if ((i==0)&&(j!=0)&&(k!=0))
                     {
                           x= v[(i+m)*n*n+(j+m)*n+k+m]-v[(i+m)*n*n+(j+m)*n+(k-1)]-v[(i+m)*n*n+(j-1)*n+(k+m)]+v[(i+m)*n*n+(j-1)*n+(k-1)];
                     }
                     if ((i!=0)&&(j==0)&&(k!=0))
                     {
                           x= v[(i+m)*n*n+(j+m)*n+k+m]-v[(i+m)*n*n+(j+m)*n+(k-1)]-v[(i-1)*n*n+(j+m)*n+(k+m)]+v[(i-1)*n*n+(j+m)*n+(k-1)];
                     }
                     if ((i!=0)&&(j!=0)&&(k==0))
                     {
                           x= v[(i+m)*n*n+(j+m)*n+k+m]-v[(i-1)*n*n+(j+m)*n+(k+m)]-v[(i+m)*n*n+(j-1)*n+(k+m)]+v[(i-1)*n*n+(j-1)*n+(k+m)];
                     }
                       // fout<<i<<" "<<j<<" "<<k<<" "<<m<<" "<<x<<endl;
                     if ((x*100)>=(m+1)*(m+1)*(m+1)*p)
                        {

                             ++v2[m+1];
                        }
            } }
        }
    }
}
for(i=n;i>=1;i--)
{
    if (v2[i]>0)
    {
        cout<<i<<" "<<v2[i]<<endl;
        break;
    }
}
if (i==0)
            cout<<"-1"<<endl;



}

return 0;
}
