#include <stdio.h>
#define f while(getchar()!='\n')

int main(){
	int t;
	scanf("%d",&t);f;
	for(int tc=0;tc<t;tc++){
		char c[2];
		int a;
		scanf("%s %d",c,&a);f;
		printf("Case #%d:\n",tc+1);
		if(c[0]=='<'){
			int count=a*2;
			for(int i=0;i<a*2;i++){
				if(i>a)
					count+=2;
				else if(i<a)
					count-=2;
				for(int j=0;j<a*2-1;j++){					
					if(j==count)
						printf("*");
					else
						printf(".");					
				}
				printf("\n");
			}
		}else if(c[0]=='>'){
			int count=-2;
			for(int i=0;i<a*2;i++){
				if(i<a)
					count+=2;
				else if(i>a)
					count-=2;
				for(int j=0;j<a*2-1;j++){					
					if(j==count)
						printf("*");
					else
						printf(".");					
				}
				printf("\n");
			}
		}
		printf("\n");

	}
	
	return 0;
}
