#include<stdio.h>
#include<stdlib.h>
int dfn[100]={0},num=1,stack[100][2],top=-1;
void BiComp(int G[][100],int n,int u,int v,int l[]){
int w,x,y;
dfn[u]=num;
l[u]=num;
num+=1;
for(w=1;w<=n;w++){
if(G[u][w]==1){
if((w!=v)&&(dfn[w]<dfn[u])){
top++;
stack[top][0]=u;
stack[top][1]=w;
   }
if(dfn[w]==0){
BiComp(G,n,w,u,l);
  if(l[w]>=dfn[u]){
printf("\nNEW COMPONENT\n");
do{
x=stack[top][0];
y=stack[top][1];
top--;
printf("%d-%d\n",x,y);
}
while(((x!=u)||(y!=w))&&((x!=w)||(y!=u)));
}
if(l[u]<l[w])
l[u]=l[u];
else
l[u]=l[w];
}
else if(v!=w){
  if(l[u]<dfn[w])
l[u]=l[u];
else
l[u]=dfn[w];
}
}//if
}//for
}//Alg
int main(){
int n,G[100][100],i,j,l[100];
printf("enter no of vertices:");
scanf("%d",&n);
printf("enter the adjacency matrix:");
for(i=1;i<=n;i++)
for(j=1;j<=n;j++)
scanf("%d",&G[i][j]);
BiComp(G,n,1,1,l);
}

