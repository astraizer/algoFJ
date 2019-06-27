#include <stdio.h>

int main(){
	char nim[11];
	char name[26];
	scanf("%[^(](%[^)]",name,nim);getchar();
	int d,m,y;
	scanf("%d-%d-%d",&d,&m,&y);
	printf("%s\n",nim);
	printf("%s_%02d%02d%04d\n",name,d,m,y);
}
