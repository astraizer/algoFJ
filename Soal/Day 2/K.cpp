#include <stdio.h>

int main(){
	int t;
	scanf("%d",&t);
	for(int tc=0;tc<t;tc++){
		int n,m;
		scanf("%d %d",&n,&m);
		int p[m];
		int temp[100000];
		for(int i=0;i<100000;i++){
			temp[i]=0;
		}
		int count=0;
		for(int i=0;i<m;i++){
			scanf("%d",&p[i]);
			if(temp[p[i]]==1||n<=0){
				count++;
			}
			else{
				temp[p[i]]=1;
				n--;
			}
		}
		printf("Case #%d: %d\n",tc+1,count);
	}
	
	return 0;
}
