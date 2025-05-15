#include<stdio.h>
int main()
{
	int i,n;
	scanf("%d",&n);
	int a[n],count[10] = {0};
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
			for(i=0;i<n;i++)
	{
		count[a[i]]++;
	}
	for(i=0;i<10;i++)
	{
		if(count[i]>0)
		printf("%d ",count[i]);
	}
	return 0;
}