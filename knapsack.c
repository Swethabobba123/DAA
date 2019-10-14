#include<stdio.h>
struct node{
int profit;
int weight;
float p;
};
int main(){
 struct  node ob[100];
 int n,cap,l[100],i,j,p,t,c,y;
 float x[100],totalp=0.0;
 printf("enter no. of elements: ");
 scanf("%d",&n);
  printf("enter capacity f bag :");
 scanf("%d",&cap);
 for(i=1;i<=n;i++)
 {
  printf("enter profit :");
  scanf("%d",&ob[i].profit);
  printf("enter weight :");
  scanf("%d",&ob[i].weight);
  ob[i].p=0;
 }
  for(i=1;i<=n;i++){
  c=ob[i].profit;
  y=ob[i].weight;
   x[i]=(float)c/y;
l[i]=i;
 }
 for(i=1;i<=n;i++)
for(j=i+1;j<=n;j++){
if(x[i]<x[j]){
t=l[i];
l[i]=l[j];
l[j]=t;
t=x[i];
x[i]=x[j];
x[j]=t;
}
}
 for(i=1;i<=n;i++){
    if(ob[l[i]].weight<=cap)
    {
         ob[l[i]].p=1;
cap=cap-ob[l[i]].weight;    
   }
   else
   break;
    }
      ob[l[i]].p=(float)cap/ob[l[i]].weight;
    for(i=1;i<=n;i++)
    {
      printf("%d\t",ob[i].profit);
    }
    printf("\n");
    for(i=1;i<=n;i++)
    {
 printf("%d\t",ob[i].weight);
    }
    printf("\n");
     for(i=1;i<=n;i++)
    {
 printf("%.2f\t",ob[i].p);
    }
    printf("\n");
 for(i=1;i<=n;i++)
   {
    totalp+=(ob[l[i]].p*ob[l[i]].profit);
   }
printf("Total Profit is :%.3f\n",totalp);
return 0;
}

/*
20
25 24 15 p
18 15 10 w
*/
