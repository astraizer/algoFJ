#include <stdio.h>

int main(){
	int n,t;
	scanf("%d %d",&n,&t);
	int a[n];
	int idx=0;
	for(int i=0;i<n;i++){
		int b;
		scanf("%d",&b);
		if(b>=t){
			a[idx]=i+1;
			idx++;
		}
	}
	if(idx!=0)	{
		
		printf("%d\n",idx);
		for(int i=0;i<idx;i++){
			printf("%d",a[i]);
			if(i!=idx-1) printf(" ");
		}
	}
	else
		printf("Poor Jojo");
	
	printf("\n");
	return 0;
}
