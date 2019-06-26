#include <stdio.h>

int main(){
	int t;
	scanf("%d",&t);
	for(int tc=0;tc<t;tc++){
		int n;
		scanf("%d",&n);
		int a[n+1];
		for(int i=0;i<n;i++){
			a[i]=0;
		}
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				int b;
				scanf("%d",&b);
				a[j]+=b;
			}
		}
		printf("Case #%d: ",tc+1);
		for(int i=0;i<n;i++){
			if(i!=n-1){			
				printf("%d ",a[i]);
			}
			else{
				printf("%d\n",a[i]);
			}
		}
	}
	return 0;
}
