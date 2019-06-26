#include <stdio.h>

int main(){
	int t;
	scanf("%d",&t);
	for(int tc=0;tc<t;tc++){
		int n;
		scanf("%d",&n);
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				if(i==0||j==0||i==n-1||j==n-1||j==n/2||i==n/2)
					printf("*");
				else
					printf(" ");
			}
			printf("\n");
		}
		printf("\n");
	}
	return 0;
}
