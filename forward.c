#include<stdio.h>
void forward(int cost[30][30],int k,int n) 
{
	int p[30],c[30],i,j,r,d[30],min;
	c[n]=0;
	for(i=n-1;i>=1;i--)            
	{
		min=9999;
		for(r=n;r>i;r--)
		{
			if(cost[i][r]!=0 && (cost[i][r]+c[r])<=min)
			{
				c[i]=cost[i][r]+c[r];
				min=c[i];
				d[i]=r;
			}
		}
	}
	p[1]=1;
	p[k]=n;
	for(j=2;j<=k-1;j++)
	   p[j]=d[p[j-1]];
	printf("Path Vector\n");
	for(i=1;i<=k;i++)
	   printf("%d\t",p[i]);
}
main()
{
	int i,j,cost[30][30],k,n;
	printf("Enter no. of nodes\n");
	scanf("%d",&n);
	printf("Enter no. of stages\n");
	scanf("%d",&k);
	printf("Enter Cost matrix\n");
	for(i=1;i<=n;i++)
	   for(j=1;j<=n;j++)
	      scanf("%d",&cost[i][j]);
	forward(cost,k,n);	
}		




/*
o/p
Enter no. of nodes
9    
Enter no. of stages
5
Enter Cost matrix
0 5 2 0 0 0 0 0 0
0 0 0 3 0 3 0 0 0
0 0 0 6 5 8 0 0 0
0 0 0 0 0 0 1 4 0
0 0 0 0 0 0 6 2 0
0 0 0 0 0 0 6 2 0
0 0 0 0 0 0 0 0 7
0 0 0 0 0 0 0 0 3
0 0 0 0 0 0 0 0 0
Path Vector
1 3 5 8 9
*/
