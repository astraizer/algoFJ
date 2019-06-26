#include <stdio.h>

int main(){
	int t;
 	int n,m;
	scanf("%d",&t);
	for(int tc=0;tc<t;tc++){
		scanf("%d %d",&n,&m);
		n*=5;
		m*=2;
		n/=2;
		int cc;
		if(n>m){
			cc=m;
		}
		else{
			cc=n;
		}
		printf("Case #%d: %d\n",tc+1,cc);
	}
	return 0;
}
