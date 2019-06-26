#include <stdio.h>
#include <string.h>
int main(){
	int t;
	scanf("%d",&t);
	for(int tc=0;tc<t;tc++){
		char s[501];
		int check=0;
		scanf("%s",s);
		for(int i=0;i<strlen(s);i++){
			if(s[i]!=s[strlen(s)-1-i]){
				check=1;
				break;
			}
		}
		printf("Case #%d: ",tc+1);
		if(check==0){
			printf("Yay, it's a palindrome\n");
		}
		else{
			printf("Nah, it's not a palindrome\n");
		}
	}
	return 0;
}
