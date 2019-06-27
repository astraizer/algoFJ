#include <stdio.h>
#include <string.h>

int main(){
	int t;
	scanf("%d",&t);getchar();
	for(int tc=0;tc<t;tc++){
		char s[1001];
		scanf("%[^\n]",s);getchar();
		printf("Case #%d : ",tc+1);
		for(int i=0;i<strlen(s);i++){
			if(s[i]!='A'&&
			s[i]!='I'&&
			s[i]!='U'&&
			s[i]!='E'&&
			s[i]!='O'&&
			s[i]!='a'&&
			s[i]!='i'&&
			s[i]!='u'&&
			s[i]!='e'&&
			s[i]!='o')
				printf("%c",s[i]);
		}
		printf("\n");
	}
	return 0;
}
