#include <stdio.h>

int main(){
	int n,m;
	scanf("%d %d",&n,&m);
	int x[n];
	int y[m];
	for(int i=0;i<n;i++){
		scanf("%d",&x[i]);
	}
	for(int i=0;i<m;i++){
		scanf("%d",&y[i]);		
	}
	int idxX=0;
	int idxY=0;
	while(idxX<n&&idxY<m){
		if(x[idxX]<y[idxY]){
			idxX++;
		}
		else{
			idxY++;
		}
	}
	if(idxX==n){
		printf("Secret debunked\n");
	}
	else if(idxY==m){
		printf("The dark secret was true\n");
	}
	return 0;
}
