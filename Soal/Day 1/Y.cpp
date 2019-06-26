#include <stdio.h>

int main(){
	long long int s,m,n;
	scanf("%ld %ld %ld",&s,&m,&n);
	for(int i=0;i<m;i++){	
		if(i!=m-1)
			printf("%ld ",s);
		else
			printf("%ld\n",s);
		s+=n;
	}
}
