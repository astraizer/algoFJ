#include <stdio.h>

int main(){
	int t;
	long int n,m;
	scanf("%d",&t);
	for(int tc=0;tc<t;tc++){
		scanf("%d %d",&n,&m);
		n*=5;
		m*=2;
		int cc=0;
		while(true){
			cc++;
			n-=2;
			m-=1;
			if(n<=0||m<=0)
				break;
		}
		printf("Case #%d: %d\n",tc+1,cc);
	}
	return 0;
}
