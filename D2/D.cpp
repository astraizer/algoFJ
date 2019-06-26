#include <stdio.h>

int main(){
	int t;
	scanf("%d",&t);
	for(int tc=0;tc<t;tc++){
		int n;
		scanf("%d",&n);
		int a[n+1];
		int on=0;
		int off=0;
		for(int i=0;i<n;i++){
			scanf("%d",&a[i]);
		}
		for(int i=0;i<n;i++){
			for(int j=i+1;j<n;j++){
				int count=0;
				int sum = a[i]^a[j];
				while(sum!=0){
					if(sum%2!=0){
						count++;
					}
					sum/=2;
				}
				if(count>=3)
					on++;
				else
					off++;
			}
		}
		printf("Case #%d: %d %d\n",tc+1,on,off);
	}
	
	return 0;
}
