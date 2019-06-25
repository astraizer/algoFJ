#include <stdio.h>

int main(){
	int x;
	scanf("%d",&x);
	char a='A';
	for(int i=0;i<x;i++){
		for(int j=x;j>i+1;j--){
			printf(" ");
		}
		for(int j=0;j<=i;j++){
			if(j!=i)
				printf("%c ",a);
			else
				printf("%c\n",a);
		}
		a+=1;
		if(a>'Z')
			a='A';
	}
}
