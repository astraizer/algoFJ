#include <stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int count[n];
	int index=0;
	for(int i=0;i<n;i++){
		count[i]=1;
	}
	for(int i=0;i<n-1;i++){
		if(a[i]<a[i+1])
			count[index]++;
		else
			index++;
	}
	index++;
	for(int i=0;i<index;i++){
		printf("%d",count[i]);
		if(i!=index-1)printf(" ");
	}
	printf("\n");
	return 0;
}
