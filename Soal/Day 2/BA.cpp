#include<stdio.h>

int main(){
	int t;
	scanf("%d",&t);
	for(int tc=0;tc<t;tc++){
		int n;
		scanf("%d",&n);
		int a[n];
		for(int i=0;i<n;i++){
			scanf("%d",&a[i]);
		}	
		int b,l;
		scanf("%d %d",&b,&l);
		printf("Case #%d : ",tc+1);
		if(a[b-1]>a[l-1])
			printf("Bibi\n");
		else if(a[l-1]>a[b-1])
			printf("Lili\n");
		else
			printf("Draw\n");
	}
}
