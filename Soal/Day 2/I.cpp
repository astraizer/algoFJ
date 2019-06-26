#include <stdio.h>
#include <string.h>
int main(){
	int t;
	scanf("%d",&t);
	for(int tc=0;tc<t;tc++){
		char s[101];
		scanf("%s",s);
		int len = strlen(s);
		char stemp[101];
		for(int i=0;i<len;i+=2){
			char temp = s[i];
			s[i]=s[i+1];
			s[i+1]=temp;
		}
		for(int i=0;i<len/2;i++){
			char temp = s[i];
			s[i]=s[i+len/2];
			s[i+len/2]=temp;		
		}
		for(int i=0;i<len/2;i++){
			char temp = s[i];
			s[i]=s[len-i-1];
			s[len-i-1]=temp;
		}	
		printf("Case #%d\n%s\n",tc+1,s);
	}
	return 0;
}
