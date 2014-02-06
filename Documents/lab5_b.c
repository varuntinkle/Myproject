# include <stdio.h>

int main()
{
int t,x,a,b,c,c1,c2,c3,swap;
printf("Enter 0 to terminate else input 1\n");
scanf("%d",&t);
while(t!=0)
{

scanf("%d%d%d",&a,&b,&c);
if (a>b)
{
swap=a;
a=b;
b=swap;
}
if (c==0)
{
printf("%d\n",(b-a+1));
continue;
}
c1=(a-1)/c;
c2=b/c;
 c3=c2-c1;
printf("%d\n",c3);

printf("Enter 0 to terminate else input 1\n");
scanf("%d",&t);
}
  return 0;
}