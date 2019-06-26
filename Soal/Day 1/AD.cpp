#include <stdio.h>

int main(){
	for(int i=0;i<3;i++){
		unsigned long long a;
		scanf("%llu",&a);
		if(a%10!=0){
			printf("0.%llu\n",a);
		}
		else{
			while(a%10==0){
				a/=10;
			}
			printf("0.%llu\n",a);
		}
	}

}
