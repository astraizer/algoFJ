#include <stdio.h>
#include <string.h>
#define f while(getchar()!='\n')

char key[4][12]={"qwertyuiop","asdfghjkl;","zxcvbnm,./"};

int main(){
	int t;
	scanf("%d",&t);f;
	for(int tc=0;tc<t;tc++){
		char n;
		char s[101];
		scanf("%c",&n);f;
		scanf("%[^\n]",s);f;
		for(int i=0;i<strlen(s);i++){
			for(int j=0;j<3;j++){
				for(int k=0;k<10;k++){
					if(s[i]==key[j][k]){
						if(n=='R'){
							int div = (k==0)?9:k-1;
							s[i]=key[j][div];
							break;
						}
						else if(n=='L'){
							int div = (k==9)?0:k+1;
							s[i]=key[j][div];
							break;
						}
					}
				}
			}
		}
		printf("Case #%d: %s\n",tc+1,s);
	}
}
