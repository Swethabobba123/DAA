
#include<stdio.h>
#include<stdlib.h>
int g[10][10],vi[10],n,v; 
void dfs(int i)
{
    int j;
	printf("%d\n",i);
    vi[i]=1;	
	for(j=1;j<=n;j++)
       if(!vi[j]&&g[i][j]==1)
            dfs(j);
} 
int main()
{
    int i,j;
    printf("Enter number of vertices:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
        vi[i]=0;
	printf("\nEnter adjecency matrix of the graph:\n");
	for(i=1;i<=n;i++)
       for(j=1;j<=n;j++)
			scanf("%d",&g[i][j]);
   
    printf("\n Enter the starting vertex:");
	scanf("%d",&v);
	dfs(v);
}
