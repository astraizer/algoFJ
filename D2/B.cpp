#include <stdio.h>

int strlen(char s[]){
	int count=0;
	while(s[++count]!='\0');
	return count;
}

int main(){
	int t;
	scanf("%d",&t);
	for(int tc=0;tc<t;tc++){
		char s[1001]="";
		int temp[1001];
		for(int i=0;i<1001;i++){
			temp[i]=0;
		}
		scanf("%s",s);
		for(int i=0;i<strlen(s);i++){
			if(s[i]!='A'||s[i]!='I'||s[i]!='U'||s[i]!='E'||s[i]!='O'){
				while(s[i]!='A'&&s[i]!='I'&&s[i]!='U'&&s[i]!='E'&&s[i]!='O'){
					s[i]--;
					temp[i]++;
				}
			}
		}
		printf("Case #%d:\n%s\n",tc+1,s);
		for(int i=0;i<strlen(s);i++){
			printf("%d",temp[i]);
		}
		printf("\n");
	}
	return 0;
}
