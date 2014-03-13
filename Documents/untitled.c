# include <stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	int a[n];
	int i;  
	for(i=0;i<n;i++)
		scanf("%d",a[i]);
	int max;
	max=a[0];
	for(i=0;i<n;i++)
	{
		if (a[i]>max)
			max=a[i];
	}
	printf("%d\n",max);
	return 0;
}