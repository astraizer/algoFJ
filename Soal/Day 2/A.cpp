#include <stdio.h>

int main(){
	int t;
	scanf("%d",&t);
	for(int i=0;i<t;i++){
		long long int a,b;
		scanf("%lld %lld",&a,&b);	
		long long int div = 100000000;
		int sum=0;
		while(div!=0){

			if(a%div!=a||b%div!=b){
				if((a/div+b/div)%10!=0)
					sum += ((a/div+b/div)%10)*div;
				a%=div;
				b%=div;
			}
			div/=10;
		}
		
		printf("Case #%d: %d\n",i+1,sum);
	}
	return 0;
}
