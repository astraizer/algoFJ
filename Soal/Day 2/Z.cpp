#include <stdio.h>

int main(){
	int t;
	scanf("%d",&t);
	for(int tc=0;tc<t;tc++){
		int n,m;
		scanf("%d %d",&n,&m);
		int sum=0;
		for(int i=0;i<n;i++){
			int b;
			scanf("%d",&b);
			sum+=b;
		}
		printf("Case #%d: ",tc+1);
		if(sum<m)
			printf("Yes");
		else
			printf("No");
		printf("\n");
	}
	return 0;
}
