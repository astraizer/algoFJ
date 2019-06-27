#include <stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	long long int a[n];
	long long int sum=0;
	for(int i=0;i<n;i++){
		scanf("%lld",&a[i]);
		sum+=a[i];
	}
	if(sum%2!=0){
		for(int i=0;i<n;i++){
			if(a[i]%2!=0){
				sum-=a[i];
				break;
			}
		}
	}
	printf("%lld\n",sum);
	return 0;
}
