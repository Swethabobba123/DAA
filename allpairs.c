#include<stdio.h>
void allpairs(int **cost,int **A,int n)
{
	int i,j,k;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			A[i][j]=cost[i][j];
		}
	}
	for(k=0;k<n;k++)
	{
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				if(A[i][j]>(A[i][k]+A[k][j]))
				{
					A[i][j]=A[i][k]+A[k][j];
				}
			}
		}
	}
}
main()
{
	int **cost,**A,i,j,n;
	scanf("%d",&n);
	cost=(int **)malloc(n*sizeof(int *));
	for(i=0;i<n;i++)
	{
		cost[i]=(int *)malloc(n*sizeof(int));
	}
	A=(int **)malloc(n*sizeof(int *));
	for(i=0;i<n;i++)
	{
		A[i]=(int *)malloc(n*sizeof(int));
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&cost[i][j]);
		}
	}
	allpairs(cost,A,n);
	printf("hi");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",A[i][j]);
		}
      printf("\n");
	}
}
