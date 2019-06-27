#include <stdio.h>

int main(){
	int t;
	scanf("%d",&t);
	for(int tc=0;tc<t;tc++){
		int h,m;
		char a[3];
		scanf("%d:%d %s",&h,&m,a);
		if(a[0]=='a'&&h==12)
			h=0;
		else if(a[0]=='p'&&h<12){
			h+=12;
		}
		printf("Case #%d: %02d:%02d\n",tc+1,h,m);
	}
	return 0;
}
