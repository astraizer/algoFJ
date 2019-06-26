#include <stdio.h>

int count[1001];

int main(){
	int t;
	scanf("%d",&t);
	for(int i=0;i<1001;i++){
			count[i]=0;
	}
	int a; 
	for(int tc=0;tc<t;tc++){
		scanf("%d",&a);
		count[a]++;
	}
	int max=0;
	for(int i=0;i<1001;i++){
		if(max<count[i])
			max=count[i];
	}
	printf("%d\n",max);
	
	return 0;
}
