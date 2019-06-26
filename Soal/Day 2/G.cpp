#include <stdio.h>

int main(){
	int t;
	scanf("%d",&t);
	for(int tc=0;tc<t;tc++){
		int n;
		scanf("%d",&n);
		int score[n];
		double avg=0;
		for(int i=0;i<n;i++){
			scanf("%d",&score[i]);
			avg+=score[i];
		}
		avg/=n;
		int count=0;
		for(int i=0;i<n;i++){
			if(avg<=score[i]){
				count++;
			}
		}
		printf("Case #%d: %d\n",tc+1,count);
		
	}
	return 0;
}
