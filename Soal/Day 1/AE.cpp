#include <stdio.h>

int main(){
	int n;
	long long unsigned int h;
	scanf("%d %llu",&n,&h);
	long long unsigned int res=0;
	long long unsigned int max=0;
	long long unsigned int a;
	for(int i=0;i<n;i++){
		scanf("%llu",&a);
		if(a<h){
			res+=(h-a);
		}
		else if(a>=h){
			if(max<res){
				max=res;
			}
			res=0;
		}
		if(i==n-1&&max<res){
			max=res;
		}
	}
	printf("%llu\n",max);
}
