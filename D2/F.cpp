#include <stdio.h>
#include <string.h>

int main(){
	int t;
	scanf("%d",&t);getchar();
	for(int tc=0;tc<t;tc++){
		char s[10005];
		scanf("%[^\n]",s);getchar();
		printf("Case #%d: ",tc+1);
		if(strstr(s,"L0V3")!=0){
			printf("Bibi <3\n");
		}
		else{
			printf("Not Bibi\n");
		}
	}
	
	return 0;
}
