#include <stdio.h>
#include <string.h>
char month[12][30]={"January","February","March","April","May","June","July",
					"August", "September", "October", "November", "December"};

int main(){
	int t;
	scanf("%d",&t);
	for(int tc=0;tc<t;tc++){
		char m[30];
		int n;
		scanf("%s",&m);
		scanf("%d",&n);
		int idx;
		for(int i=0;i<12;i++){
			if(strcmp(month[i],m)==0){
				idx=i;
				break;
			}
		}
		idx+=n;
		idx%=12;
		printf("Case #%d: %s\n",tc+1,month[idx]);
	}
	return 0;
}
