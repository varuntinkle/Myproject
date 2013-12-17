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
    ll i,j,k,x,y,l,n,m,t;
ifstream fin;ofstream fout;
fin.open("D:/Input.txt");
fout.open("D:/Output.txt");
cin>>n;
vector <ll> v(n);
if (n==1)
{
    cout<<1<<endl;
    return 0;
}
if (n==2)
{
    cout<<2<<endl;
    return 0;
}
for1(i,0,n)

cin>>v[i];
ll sum1=2;
ll current=2;
for(i=2;i<n;i++)
{
    if (v[i]==v[i-1]+v[i-2])
        current+=1;
    else
        current=2;
    sum1=max(current,sum1);
}
cout<<sum1<<endl;
return 0;
}
