#include <stdio.h>

int main(){
	int n,m,q;
	scanf("%d %d %d",&n,&m,&q);
	int arr[n][m];
	for(int i=0;i<q;i++){
		int x,y,a;
		scanf("%d %d %d",&x,&y,&a);
		arr[x][y]=a;
	}
	return 0;
}
