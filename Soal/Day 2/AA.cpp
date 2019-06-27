#include <stdio.h>
#define f while(getchar()!='\n')
int main(){
	int t;
	scanf("%d",&t);f;
	for(int tc=0;tc<t;tc++){
		int n;
		scanf("%d",&n);f;
		int a[1000];
		for(int i=0;i<n;i++){
			scanf("%d",&a[i]);
		}
		f;
		int x,y;
		scanf("%d %d",&x,&y);f;
		int sum = a[x-1]*a[y-1];
		printf("Case #%d: %d\n",tc+1,sum);
	}
	return 0;
}
