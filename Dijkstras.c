#include<stdio.h>
void dijkstras(int start,int cost[100][100],int dist[100],int n)
{
int i,s[100],u,j,min,path[100],l=0;
path[++l]=start;
for(i=1;i<=n;i++)
{
s[i]=0;
}
  s[start]=1;
  dist[start]=0;
  for(j=1;j<=n;j++){
  min=999;
  for(i=1;i<=n;i++)
  {
  if(dist[i]<min && s[i]!=1){
  min=dist[i];
u=i;
  }
  }
  path[++l]=u;
  s[u]=1;
  for(i=1;i<=n;i++){
  if(cost[u][i]<999 && s[i]==0)
  {
  if(dist[i]>dist[u]+cost[u][i])
  dist[i]=dist[u]+cost[u][i];
 
  }
  }
 }
for(i=1;i<=n;i++)
printf("%d ",dist[i]);
printf("\n");
for(i=1;i<l;i++)
printf("%d\t",path[i]);


}


int main()
{
int a[100][100],i,j,n,start,cost[100][100],dist[100];
printf("enter the no. of nodes : ");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
for(j=1;j<=n;j++)
{
printf("%d-%d : ",i,j);
scanf("%d",&a[i][j]);
}
}
printf("enter starting element : ");
scanf("%d",&start);
    for(i=1;i<=n;i++)
{
for(j=1;j<=n;j++)
{
cost[i][j]=a[i][j];
}
}
   for(i=1;i<=n;i++)
    dist[i]=cost[start][i];
   dijkstras(start,cost,dist,n);
   return 0;
}

