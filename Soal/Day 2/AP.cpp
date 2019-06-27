#include <stdio.h>
#include <string.h>

int main(){
	int t;
	scanf("%d",&t);getchar();
	for(int tc=0;tc<t;tc++){
		char s[1001];
		scanf("%[^\n]",s);getchar();
		int uc=0;
		int lc=0;
		for(int i=0;i<strlen(s);i++){
			if(s[i]>='A' && s[i]<='Z')
				uc++;
			else if(s[i]>='a' && s[i]<='z')
				lc++;
		}
		if(lc==uc){
			if(s[0]>='a' && s[0]<='z')
				lc++;
			else
				uc++;
		}
		for(int i=0;i<strlen(s);i++){
			if(uc>lc){
				if(s[i]>='a' && s[i]<='z')
					s[i]-=32;
			}
			else if(lc>uc){
				if(s[i]>='A' && s[i]<='Z')
					s[i]+=32;
			}
		}
		printf("Case #%d: %s\n",tc+1,s);
	}
	return 0;
}
