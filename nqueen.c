#include<stdio.h>
#include<math.h>
//int count;
	int placed(int i,int j,int *x){
	int k;
	for(k=1;k<=i-1;k++)
		if(x[k]==j||abs(k-i)==abs(j-x[k]))
		return 0;
	return 1;
	}
	void Nqueen(int i,int n,int *x,int c[1]){
		int j,l;
		for(j=1;j<=n;j++){
			if(placed(i,j,x)){
				x[i]=j;
				if(i==n)
					{
					c[0]=c[0]+1;
					for(l=1;l<=n;l++)
						printf("%d   ",x[l]);
						printf("\n");
					}
				else
				Nqueen(i+1,n,x,c);
			}
	}
		}
		int main(){
			int n,*x,c[1]={0};
			printf("enter number of queens\n");
			scanf("%d",&n);
			x=(int*)calloc(n,sizeof(int));
			Nqueen(1,n,x,c);
            printf("no of solutions are:%d",c[0]);
            }

