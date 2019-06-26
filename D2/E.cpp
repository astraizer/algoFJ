#include <stdio.h>

int strlen(char s[]){
	int count=-1;
	while(s[++count]!='\0');
	return count;
}

int main(){
	int t;
	scanf("%d",&t);getchar();
	for(int tc=0;tc<t;tc++){
		char s[1001];
		scanf("%[^\n]",s);getchar();
		printf("Case #%d: ",tc+1);
		for(int i=0;i<strlen(s);i++){
			if(s[i]=='0'){
				printf("O");
			}
			else if(s[i]=='1'){
				printf("I");
			}
			else if(s[i]=='2'){
				printf("Z");
			}
			else if(s[i]=='3'){
				printf("E");
			}
			else if(s[i]=='4'){
				printf("A");
			}
			else if(s[i]=='5'){
				printf("S");
			}
			else if(s[i]=='6'){
				printf("G");
			}
			else if(s[i]=='7'){
				printf("T");
			}
			else if(s[i]=='8'){
				printf("B");
			}
			else if(s[i]=='9'){
				printf("P");
			}
			else{
				printf("%c",s[i]);
			}
		}
		printf("\n");
	}
	return 0;
}
