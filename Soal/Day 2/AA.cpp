#include <stdio.h>

int main(){
	int t;
	scanf("%d",&t);
	for(int tc=0;tc<t;tc++){
		int n;
		scanf("%d",&n);
		int a[n];
		for(int i=0;i<n;i++){
			scanf("%d",a[i]);
		}
		int x,y;
		scanf("%d %d",&x,&y);
		printf("Case #%d: %d\n",tc,a[x-1]*a[y-1]);
	}
	return 0;
}
