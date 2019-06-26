#include <stdio.h>
#include <string.h>

int main(){
	int t;
	scanf("%d",&t);
	for(int tc=0;tc<t;tc++){
		char s[1000];
		scanf("%s",s);
		for(int i=0;i<strlen(s)/2;i++){
			char temp = s[i];
			s[i]=s[strlen(s)-1-i];
			s[strlen(s)-1-i] = temp;
		}
		printf("Case #%d : %s\n",tc+1,s);
	}
	return 0;
}
