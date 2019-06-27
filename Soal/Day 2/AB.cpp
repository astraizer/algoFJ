#include <stdio.h>

int main(){
	int t;
	scanf("%d",&t);
	for(int tc=0;tc<t;tc++){
		int n,q;
		scanf("%d %d",&n,&q);
		int a[n];
		for(int i=0;i<n;i++){
			scanf("%d",&a[i]);
		}
		printf("Case #%d:\n",tc+1);
		for(int i=0;i<q;i++){
			int b;
			scanf("%d",&b);
			printf("%d\n",a[b]);
		}
		printf("\n");
	}
	
}
