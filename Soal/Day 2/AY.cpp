#include <stdio.h>
#include <string.h>
int main(){
	int t;
	scanf("%d",&t);getchar();
	for(int tc=0;tc<t;tc++){
		char s[1001];
		int check=0;
		scanf("%[^\n]",&s);getchar();
		if(s[0]>='a'&&s[0]<='z'){
			s[0]-=32;
		}
		for(int i=1;i<strlen(s);i++){
			if(s[i]>='A'&&s[i]<='Z')
				s[i]+=32;
			if(s[i]=='.'){
				check++;
			}
		}
		printf("Case #%d: ",tc+1);
		for(int i=0;i<strlen(s)-check;i++){
			printf("%c",s[i]);		
		}
		printf(".");
		printf("\n");
	}
	return 0;
}
