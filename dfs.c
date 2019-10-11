
#include<stdio.h>
void dfs(int i,int v[20],int g[20][20],int n)
{
int j;
v[i]=1;
printf("%d ",i);
for(j=1;j<=n;j++)
{
if(v[j]==0 && g[i][j]==1)
dfs(j,v,g,n);
}
}

int main()
{
int g[20][20],v[20],i,j,n,start;
printf("enter no. of vertices : ");
scanf("%d",&n);
for(i=1;i<=n;i++)
v[i]=0;
printf("\nenter adjacency matrix:\n");
for(i=1;i<=n;i++)
for(j=1;j<=n;j++)
scanf("%d",&g[i][j]);
printf("enter the starting vertex : ");
scanf("%d",&start);
dfs(start,v,g,n);
}
