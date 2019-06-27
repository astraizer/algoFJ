#include <stdio.h>

int main(){
	int t;
	scanf("%d",&t);
	for(int tc=0;tc<t;tc++){
		int n;
		scanf("%d",&n);
		int x[n];
		for(int i=0;i<n;i++){
			scanf("%d",&x[i]);
		}
		int mid = n;
		int check=0;
		while(mid!=0){
			mid /= 2;
			int lr = mid;
			int rl = mid+1;
			int sum1=0;
			int sum2=0;
			for(int i=0;i<mid;i++){
				sum1+=x[i];
			}
			for(int i=lr;i<n;i++){
				sum2+=x[i];
			}
			if(sum1==sum2){
				check=1;
				break;
			}
		}
		printf("Case #%d: ",tc+1);
		if(check==1)
			printf("Yes");
		else
			printf("No");
		printf("\n");
	}
	return 0;
}
