#include <stdio.h>

int main(){
	int t;
	scanf("%d",&t);
	for(int i=0;i<t;i++){
		long int n;
		scanf("%ld",&n);
		printf("Case #%d: ",i+1);
		while(n!=0){
			printf("%d",n%2);
			n/=2;
		}
		printf("\n");
	}
}
