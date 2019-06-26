#include <stdio.h>

int main(){
	int n,m;
	scanf("%d %d",&n,&m);
	char s[n+1];
	scanf("%s",s);
	for(int i=0;i<m;i++){
		int a;
		scanf("%d",&a);
		if(s[a]>='a'&&s[a]<='z')
			s[a]-=32;
		else if(s[a]>='A'&&s[a]<='Z'){
			s[a]+=32;
		}
	}
	printf("%s\n",s);
	return 0;
}
