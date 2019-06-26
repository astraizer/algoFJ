#include <stdio.h>

int main(){
	int n,x;
	scanf("%d %d",&n,&x);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++){
		if(i==x) continue;
		printf("%d",a[i]);
		if(i!=n-1&&x!=n-1) printf(" ");
	}
	printf("\n");
	return 0;
}
