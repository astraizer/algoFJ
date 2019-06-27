#include <stdio.h>

int main(){
	int t;
	scanf("%d",&t);
	for(int tc=0;tc<t;tc++){
		long long unsigned int n;
		scanf("%llu",&n);
		int count=0;
		while(n!=0){
			count++;
			n/=10;
		}
		printf("Case #%d: %d\n",tc+1,count);
	}
}
