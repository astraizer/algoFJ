#include <stdio.h>
#include <string.h>
int main(){
	int t;
	scanf("%d",&t);
	for(int tc=0;tc<t;tc++){
		int n;
		scanf("%d",&n);
		char s[n][101];
		for(int i=0;i<n;i++)
			scanf("%s",s[i]);
		printf("Case #%d:\n",tc+1);
		for(int i=0;i<n;i++){
			if(strlen(s[i])>=10)
				printf("%s\n",s[i]);
		}
		puts("");
	}
	
	return 0;
}
