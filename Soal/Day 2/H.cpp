#include <stdio.h>

int main(){
	int t;
	scanf("%d",&t);
	for(int tc=0;tc<t;tc++){
		int n;
		scanf("%d",&n);
		long int a[n+1];
		for(int i=0;i<n;i++){
			scanf("%ld",&a[i]);
		}
		int max=0;
		int min=10000000;
		for(int i=0;i<n;i++){
			for(int j=i+1;j<n;j++){
				int res = (a[i]>a[j])?a[i]-a[j]:a[j]-a[i];
				if(res>max){
					max=res;
				}
				if(res<min){
					min=res;
				}
			}
		}
		printf("Case #%d: %d\n",tc+1,(max>min)?max-min:min-max);
	}
	return 0;
}
