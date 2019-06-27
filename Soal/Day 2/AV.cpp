#include <stdio.h>
#include <string.h>

int main(){
	int t;
	scanf("%d",&t);
	for(int tc=0;tc<t;tc++){
		int x;
		scanf("%d",&x);
		int idx=1;
		int res[100001];
		int idxRes=0;
		while(idx!=x){
			if(x%idx==0){
				res[idxRes]=x/idx;
				idxRes++;
			}
			idx++;
		}
		res[idxRes]=1;
		idxRes++;
		printf("Case #%d: ",tc+1);
		printf("%d",res[idxRes-1]);
		for(int i=idxRes-2;i>=0;i--){
			printf(" %d",res[i]);
		}
		if(idxRes>1)
			printf(" There are %d distinct factors that %d has\n",idxRes,x);
		else
			printf(" There is %d distinct factor that %d has\n",idxRes,x);
	}
	return 0;
}
