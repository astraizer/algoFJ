#include <stdio.h>

int main(){
	int a;
	scanf("%d",&a);
	for(int i=0;i<a;i++){
		for(int j=0;j<a*3;j++){
			if((i==0&&j==0)||(i==a-1&&j==a-1))
				printf("N");
			else if((j==0||j==a-1)||(j==a*3/2&&i>a/2))
				printf("|");
			else if(j+1==a*3-(a/2)&&i==a/2)
				printf("X");
			else if(j==a*3/2&&i==a/2){
				printf("Y");
			}
			else if((j==i&&j<a)||(j==i+a&&i<a/2)||(j-a*2==i&&j))
				printf("\\");
			else if((j+i+1==a*2&&i<a/2)||(j+i+1==a*3)){
				printf("/");
			}
			else
				printf(".");
			
		}
		printf("\n");
	}
}
