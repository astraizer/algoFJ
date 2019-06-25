#include <stdio.h>

int main(){
	int t;
	scanf("%d",&t);
	for(int tc=0;tc<t;tc++){
		long long int a;
		scanf("%lld",&a);
		printf("Case #%d: ",tc+1);
		if(a<=2147483647&&a>-2147483647){
			printf("integer\n");
		}
		else{
			printf("long long\n");
		}
	}
}
