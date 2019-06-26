#include <stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	int a[n+1];
	int b=0;
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
		if(a[i]==1)
			b=1;
	}
	if(b==1){
		printf("not easy\n");
	}
	else{
		printf("easy\n");
	}
}
