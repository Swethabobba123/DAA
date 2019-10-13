#include<stdio.h>
void dijkstras(int start,int cost[20][20],int n,int dist[20])
{
int s[20],l=0,path[20],min,i,j,u;
for(i=1;i<=n;i++)
s[i]=0;

s[start]=1;
path[++l]=start;
for(j=1;j<=n;j++)
{
min=999;
for(i=1;i<=n;i++)
{
if(dist[i]<min && s[i]!=1){
min=dist[i];
u=i;
}
}
s[u]=1;
path[++l]=u;
for(i=1;i<=n;i++)
{
if(dist[i]>dist[u]+cost[u][i] && s[i]!=1 && cost[u][i]<999)
dist[i]=dist[u]+cost[u][i];
}
}
printf("\n path is : ");
for(i=1;i<=n;i++)
printf("%d ",path[i]);
printf("\n distances from starting vertex to other vertices are : \n");
for(i=1;i<=n;i++)
printf("%d ",dist[i]);
}


int main()
{
int start,cost[20][20],dist[20],i,j,n;
printf("enter no. of vertices:");
scanf("%d",&n);
printf("\nenter strating vertex: ");
scanf("%d",&start);
for(i=1;i<=n;i++)
for(j=1;j<=n;j++)
scanf("%d",&cost[i][j]);

for(i=1;i<=n;i++)
dist[i]=cost[start][i];
dijkstras(start,cost,n,dist);
return 0;
}
