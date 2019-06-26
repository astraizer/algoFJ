#include <stdio.h>

int main(){
	int n,p;
	scanf("%d %d",&n,&p);
	int b[n+1];
	int count=0;
	for(int i=0;i<n;i++){
		scanf("%d",&b[i]);
		if(p>b[i])
			count++;
	}
	printf("%d\n",count);
}
