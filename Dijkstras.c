#include<stdio.h>
#include<stdlib.h>
int i,j,k,a,b,u,v,n,ne=1;
int mins,mincost=0,cost[9][9],parent[9];
int find(int);
int union1(int,int);
int main()
{
printf("Enter the no. of vertices\n");
scanf("%d",&n);
printf("Enter the cost adjacency matrix\n");
for(i=1;i<=n;i++)
{
for(j=1;j<=n;j++)
{
scanf("%d",&cost[i][j]);
if(cost[i][j]==0)
cost[i][j]=999;
}
}
//printf("The edges of Minimum Cost Spanning Tree are\n\n");
while(ne<n)
{
for(i=1,mins=999;i<=n;i++)
{
for(j=1;j<=n;j++)
{
if(cost[i][j]<mins)
{
mins=cost[i][j];
a=u=i;
b=v=j;
}
}
}
u=find(u);
v=find(v);
if(union1(u,v))
{
printf("%d edge (%d,%d) =%d\n",ne++,a,b,mins);
mincost +=mins;
}
cost[a][b]=cost[b][a]=999;
}
printf("Minimum cost = %d\n",mincost);
}

int find(int i)
{
while(parent[i])
i=parent[i];
return i;
}

int union1(int i,int j)
{
if(i!=j)
{
parent[j]=i;
return 1;
}
return 0;
}
