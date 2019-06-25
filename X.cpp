#include <stdio.h>

int main(){
	int l;
	scanf("%d",&l);
	char a[l+1];
	scanf("%s",a);
	for(int i=0;i<3;i++){
		int test;
		scanf("%d",&test);
		int b= (test-1)%l;
		printf("%c\n",a[b]);
	}
	return 0;
}
