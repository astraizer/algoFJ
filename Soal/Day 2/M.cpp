#include <stdio.h>

int main(){
	int t;
	scanf("%d",&t);
	for(int tc=0;tc<t;tc++){
		int n;
		scanf("%d",&n);
		int v;
		int max1=-1000000;
		int max2=0;
		for(int i=0;i<n;i++){
			scanf("%d",&v);
			if(max1<v){
				max2=max1;
				max1=v;
			}
			else if(max2<v){
				max2=v;
			}
		}
		printf("Case #%d: %d\n",tc+1,max1+max2);	
	}
	return 0;
}
