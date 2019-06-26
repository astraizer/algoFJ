#include <stdio.h>

int main(){
	int x,n;
	scanf("%d %d",&x,&n);
	int a[n];
	int idx=0;
	for(int i=0;i<n+1;i++){
		if(i%x!=0){
			a[idx]=i;
			idx++;			
		}
	}
	for(int i=0;i<idx;i++){
		printf("%d",a[i]);
		if(i!=idx-1){
			printf(" ");
		}
	}
	printf("\n");
	return 0;
}
