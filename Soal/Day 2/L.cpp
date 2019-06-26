#include <stdio.h>

int main(){
	int t;
	scanf("%d",&t);
	for(int tc=0;tc<t;tc++){
		int n,m;
		scanf("%d %d",&n,&m);
		int l[n];
		int min=0;
		int range=1000000;
		for(int i=0;i<n;i++){
			scanf("%d",&l[i]);
			int res=(m>l[i])?m-l[i]:l[i]-m;
			if(range>res){
				range=res;
				min=i;
			}
		}
		min++;
		printf("Case #%d: %d\n",tc+1,min);
	}
	return 0;
}
