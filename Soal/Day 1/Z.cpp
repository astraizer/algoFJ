#include <stdio.h>

int main(){
	int t;
	scanf("%d",&t);
	for(int tc=0;tc<t;tc++){
		long long unsigned int s;
		scanf("%llu",&s);
		long long int div=10000000000;
		int sum=0;
		if(s>9){
			while(s!=0){
				div/=10;
				if(s%div!=s){
					sum += (s/div)*(s/div);
					s%=div;
				}
				if(s==0&&sum>9){
					div=10000000000;
					s=sum;
					sum=0;
				}
			}
		}
		else{
			sum=s;
		}
		printf("Case #%d: %d\n",tc+1,sum);
	}
	
}
