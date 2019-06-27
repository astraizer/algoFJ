#include <stdio.h>

int main(){
	int t;
	scanf("%d",&t);getchar();
	for(int tc=0;tc<t;tc++){
		int n;
		scanf("%d",&n);getchar();
		char s[n+1];
		scanf("%[^\n]",s);getchar();
		for(int i=0;i<n;i++){
			if(s[i]=='8')
				s[i]='b';
		}
		printf("Case #%d: %s\n",tc+1,s);
	}
	return 0;
}
