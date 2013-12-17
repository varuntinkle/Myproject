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
struct c
{
    ll a;
    ll b;
};

bool operator <(const c&a,const c&b)
{
    if (a.a!=b.a)
        return (a.a>b.a);
    else
        return (a.b>b.b);
}
int main()
{ll i,j,k,x,y,l,n,m,t,sum1;
ifstream fin;ofstream fout;
fin.open("D:\Input.txt");
fout.open("D:\Output.txt");
cin>>t;
while(t--)
{string s1,s2;
    cin>>s1;
    cin.ignore()
    getline(cin,s2);
    reverse(s1.begin(),s1.end());
cout<<s1<<endl;
    vector<ll> v1(26,0);
    for1(i,0,26)
    v1[(int)s1[i]-97]=i;
    l=s2.length();
    vector <ll> v2(26,0);
    for1(i,0,l)
    {
        if (isalpha(s2[i]))
        {
            if ((int)s2[i]>=97)
            {
                 ++v2[(int)s2[i]-97];
            }
            else
                ++v2[(int)s2[i]-65];
        }
    }
 vector <c> v3(26);
 for1(i,0,26)
 {
     v3[i].a=v2[i];
     v3[i].b=i;
 }

sort(v3.begin(),v3.end());
 vector <ll> v4(26);
 for1(i,0,26)
 {
     v4[v3[i].b]=(int)s1[i]-97;

 }
 string s3="";
for1(i,0,l)
{
    if (!isalpha(s2[i]))
        s3+=s2[i];
    else
    {
        if ((int)s2[i]>=97)
        {
            s3+=(char)(v4[s2[i]-97]+97);
        }
        else
            s3+=(char)(v4[s2[i]-65]+65);
    }
}
cout<<s3<<endl;
}
return 0;
}
