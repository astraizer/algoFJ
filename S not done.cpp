#include <stdio.h>

int main(){
	int t;
	scanf("%d",&t);
	for(int tc=0;tc<t;tc++){
		int n;
		scanf("%d",&n);
		printf("Case #%d:",tc+1);
		int a=1024;
		int count=0;
		int max=0;
		char b[13]={0,0,0,0,0,0,0,0,0,0,0,0,0};
		while(n!=0){
			b[count]=n/a+'0';	
			if(n/a!=0)
				max=count;
			count++;
			n%=a;
			a/=2;
		}
		b[12]='0';
		printf("%s\n",b);
		for(int i=count-1;i>=0;i--){
			if(b[i]=='0'&&b[i-1]=='0')
				break;
			printf("%c",b[i]);
			
		}
		printf("\n");
		
	}
}
