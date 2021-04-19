#include<stdio.h>
int count(int A[], int n)
{
	int i, k=0;
	for(i=0;i<n;i++)
	{
		if(A[i]%2!=0)
			k++;
	}
	return k;
}
int main()
{
	int n, i, j, c;
	int a[10];
	scanf("%d", &n);
	for(i=0;i<n;i++)
	{
		scanf("%d", &a[i]);
	}
	c=count(a, n);
	
		
	printf("%d\n", c);
	if(c>0)
	{
	for(j=0;j<n;j++)
		if(a[j]%2!=0)
		{
			printf("%d ",a[j]);
		}
		
	}
	else
		printf("NONE");
	return 0;
}
