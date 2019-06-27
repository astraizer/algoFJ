#include <stdio.h>

int main(){
	int t;
	scanf("%d",&t);
	for(int tc=0;tc<t;tc++){
		int g,m,gm;
		scanf("%d %d %d",&g,&m,&gm);
		for(int i=0;i<gm;i++){
			if(g<m)
				g++;
			else
				m++;
		}
		int res = (g>m)?m:g;
		res*=2;
		printf("Case #%d: %d\n",tc+1,res);
	}
	return 0;
}
