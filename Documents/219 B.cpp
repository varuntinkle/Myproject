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

ll fast_exp(ll base, ll exp) {
   ll res=1;
   while(exp>0) {
      if(exp%2==1) res=(res*base);
      base=(base*base);
      exp/=2;
   }
   return res;
}




int main()
{ll i,j,k,x,y,l,n,m,t,sum1;
ifstream fin; ofstream fout;
fin.open("D:\Input.txt");
fout.open("D:\Output.txt");
ll w;
cin>>w>>m>>k;
w/=k;
ll dig=(ll)log10(m)+1;
cout<<dig<<endl;
n=fast_exp(10,dig)-m;   sum1=0;

while(w-(dig)*n>0)
{
    w=w-dig*n;
    sum1+=n;
    ++dig;
    n=fast_exp(10,dig)-fast_exp(10,dig-1);
}
ll low=0;
ll high=n;

ll mid;
    while(low<high)
    {
 cout<<high<<endl;
        if (((w-(dig)*mid)>=0)&&(w-(dig)*(mid+1)<0))
        {
            sum1+=mid;

            low=high+1;
        }
        if((w-(dig)*mid)<0)
        {
            high=mid-1;
        }
     if (((w-(dig)*mid)>=0)&&(w-(dig)*(mid+1)>=0))
     {
         low=mid+1;
     }
    }
     cout<<sum1<<endl;



return 0;
}
