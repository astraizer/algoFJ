#include <stdio.h>

int main(){
	int n;
	int count=0;
	scanf("%d",&n);
	for(int tc=0;tc<n;tc++){
		int ts,tv;
		scanf("%*d %d %d",&ts,&tv);
		if(ts>tv)
			count++;
	}
	printf("%d\n",count);
	return 0;
}
