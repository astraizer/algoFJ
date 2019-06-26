#include <stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	int b[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++){
		scanf("%d",&b[i]);
	}
	int check=0;
	for(int i=0;i<n;i++){
		if(a[i]!=b[i]){
			check++;
			break;
		}
	}
	if(check==1){
		printf("not ");
	}
	printf("exact copy\n");
	return 0;
}
