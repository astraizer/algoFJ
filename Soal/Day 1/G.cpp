#include <stdio.h>

int main(){
	int q;
	scanf("%d",&q);
	int a=1;
	for(int i=0;i<q;i++){
		a*=2;
		a+=1;
	}
	printf("%d\n",a);
}
