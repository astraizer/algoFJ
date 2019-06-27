#include <stdio.h>
int main(){
	int t;
	scanf("%d",&t);
	for(int tc=0;tc<t;tc++){
		int n;
		scanf("%d",&n);
		int find = n%10;
		int plus = n;
		printf("Case #%d: ",tc+1);
		printf("%d",n);
		n+=plus;
		while(n%10!=find){
			printf(",%d",n);
			n+=plus;
		}
		printf(",%d\n",n);
	}
}
