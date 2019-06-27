#include <stdio.h>

int main(){
	int t;
	scanf("%d",&t);
	for(int tc=0;tc<t;tc++){
		int n,m,q;
		scanf("%d %d %d",&n,&m,&q);
		int check=0;
		if(n<m+q)
			check++;
		if(m<n+q)
			check++;
		if(q<n+m)
			check++;
		printf("Case #%d: ",tc+1);
		if(check==3)
			printf("Yes\n");
		else
			printf("No\n");
	}
}
