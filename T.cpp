#include <stdio.h>

int main(){
	for(int i=0;i<3;i++){
		int n;
		scanf("%d",&n);
		switch(n){
			case 1:
				printf("I love fruit\n");
				break;
			case 2:
				printf("I love vegetable\n");
				break;
			case 3:
				printf("No comment\n");
				break;
		}
	}
	return 0;
}
