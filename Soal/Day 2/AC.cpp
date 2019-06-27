#include <stdio.h>

int main(){
	int t;
	scanf("%d",&t);
	for(int tc=0;tc<t;tc++){
		int n;
		scanf("%d",&n);
		int a[n];
		for(int i=0;i<n;i++){
			scanf("%d",&a[i]);
		}	
		int l,r;
		scanf("%d %d",&l,&r);
		int min=5001;
		for(int i=l-1;i<r;i++){
			if(a[i]<min){
				min=a[i];
			}
		}
		printf("Case #%d: %d\n",tc+1,min);
	}
	return 0;
}

