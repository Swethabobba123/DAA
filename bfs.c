#include<stdio.h>
int q[15],f=0,r=-1;
void bfs(int start,int n,int g[15][15],int vi[15])
{
int i;
for(i=1;i<=n;i++)
{
if(g[start][i]==1 && vi[i]==0)
{
q[++r]=i;
}
}
if(f<=r)
{
vi[q[f]]=1;
bfs(q[++f],n,g,vi);
}
}
int main()
{
int i,j,start,n,g[15][15],vi[15];
printf("enter no of nodes : ");
scanf("%d",&n);
printf("\nenter the adjacency matrix :\n");
for(i=1;i<=n;i++)
for(j=1;j<=n;j++)
scanf("%d",&g[i][j]);
printf("enter starting vertex :");
scanf("%d",&start);
for(i=1;i<=n;i++){
vi[i]=0;
q[i]=0;
}
q[++r]=start;
bfs(start,n,g,vi);
printf("\nFinal Answer\n");
for(i=0;i<n;i++)
printf("%d ",q[i]);
printf("\n");
return 0;
}
