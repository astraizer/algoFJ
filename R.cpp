#include <stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	int max=1000000000;
	long int min=1;
	for(int tc=0;tc<n;tc++){
		int a,b;
		scanf("%d %d",&a,&b);
		if(b==1){
			if(max>a){
				max=a;
			}
		}
		else{
			if(min<a){
				min=a+1;
			}
		}
	}
	printf("%d %d\n",min,max);
	return 0;
}
