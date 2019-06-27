#include <stdio.h>

int main(){
	int t;
	scanf("%d",&t);
	for(int tc=0;tc<t;tc++){
		int r,h;
		scanf("%d %d",&r,&h);
		double sum = (r*2*3.14)*(r+h);
		printf("Case #%d: %f\n",tc+1,sum);
	}
	return 0;
}
