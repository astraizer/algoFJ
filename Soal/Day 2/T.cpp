#include<stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	int res[n];
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(int i=0;i<n;i++)
		scanf("%d",&res[a[i]]);
	for(int i=0;i<n;i++){
		printf("%d",res[i]);
		if(i!=n-1)
			printf(" ");
		else
			printf("\n");
	}
	
	return 0;
}
