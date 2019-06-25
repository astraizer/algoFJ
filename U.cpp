#include <stdio.h>

int strlen(char a[]){
	int count=-1;
	while(a[++count]!='\0');
	return count;
}

int main(){
	char a[31];
	scanf("%s",a);
	for(int i=0;i<30-strlen(a);i++){
		printf("0");
	}
	printf("%s\n",a);
}

