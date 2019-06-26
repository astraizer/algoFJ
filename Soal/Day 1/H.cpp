#include <stdio.h>

int main(){
	int t;
	scanf("%d",&t);
	for(int tc=0;tc<t;tc++){
		int n,m;
		scanf("%d %d",&n,&m);
		printf("Case #%d:\n",tc+1);
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				if(j==0||i==0||j==m-1||i==n-1)
					printf("#");
				else
					printf(" ");
			}
			printf("\n");
		}
	}
}
