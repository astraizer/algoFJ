#include <stdio.h>

int main(){
	int t;
	scanf("%d",&t);
	for(int tc=0;tc<t;tc++){
		long long unsigned int n;
		scanf("%llu",&n);
		int count=0;
		while(n!=0){
			if(n%2!=0)
				count++;
			n/=2;
		}
		printf("Case #%d: %d\n",tc+1,count);
	}
}
