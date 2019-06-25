#include <stdio.h>

int main(){
	int t;
	scanf("%d",&t);
	for(int tc=0;tc<t;tc++){
		int s;
		scanf("%d",&s);
		long long int div=10000000000;
		int sum=0;
		while(s!=0){
			div/=10;
			if(s%div!=s){
				sum += (s/div)*(s/div);
				s%=div;
			}
			if(s==0&&sum>10){
				div=10000000000;
				s=sum;
				sum=0;
			}
		}
		printf("%d\n",sum);
	}
	
}
