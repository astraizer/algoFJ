#include <stdio.h>

int main(){
	int t;
	scanf("%d",&t);
	for(int tc=0;tc<t;tc++){
		int n,p;
		scanf("%d %d",&n,&p);
		int a;
		int min=1000000;
		for(int i=0;i<n;i++){
			scanf("%d",&a);
			if(p<=a&&min>a){
				min=a;
			}
		}
		printf("Case #%d: %d\n",tc+1,min);
	}
}
