# include <stdio.h>

int main()
{
int t,x,a,b,c,i,j,sum1,swap;
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
sum1=0;
for(i=a;i<=b;i++)
	{if (i%c==0)
		++sum1;
	}
printf("%d\n",sum1);
printf("Enter 0 to terminate else input 1\n");
scanf("%d",&t);
}
  return 0;
}