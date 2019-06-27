#include <stdio.h>

int main(){
	int n=5;
	int a[n];
	for(int i=0;i<n;i++){	
		scanf("%d",&a[i]);
	}
	int count=0;
	for(int i=0;i<n;i++){	
		if(a[i]==100){
			printf("Jojo solved problem %c\n",65+i);
			count++;
		}
		else{
			printf("Jojo did not solve problem %c\n",65+i);
		}
	}
	if(count>=3){
		printf("Jojo is prepared\n");
	}
	else{
		printf("Jojo is not prepared and he need to solve %d more\n",3-count);
	}
	
	return 0;
}
